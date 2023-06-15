//
// Created by WolverinDEV on 11/06/2023.
//

#include "./overlay.h"
#include "./overlay_menu.h"
#include "./data.hpp"
#include "./csgo_settings.hpp"

#include <imgui.h>
#include <imgui_impl_win32.h>
#include <imgui_impl_dx11.h>
#include <imgui_extensions.h>
#include <d3d11.h>
#include <d3dx11tex.h>
#include <dinput.h>
#include <tchar.h>
#include <string>
#include <ShlObj.h>
#include <array>
#include <dwmapi.h>
#include <iostream>
#include "icons.h"

#pragma comment(lib, "D3DX11.lib")
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dwmapi.lib")

static std::unique_ptr<overlay::ImguiContext> imgui_context{nullptr};

namespace overlay::vars {
    std::vector<ESPPlayerEntity> esp_entities{};
    std::vector<ObserverEntry> observer_entries{};

    std::vector<PlayerRank> players_ct;
    std::vector<PlayerRank> players_t;
    bool display_player_ranks;

    bomb::State bomb::state{bomb::State::None};
    int bomb::side{0};
    int bomb::damage{0};
    bool bomb::damage_critical{false};
    float bomb::time_remaining{0};
    std::optional<bomb::Defuser> bomb::defuser{std::nullopt};
}

namespace overlay {
    struct D3D11Context {
        ID3D11Device* g_pd3dDevice{nullptr};
        ID3D11DeviceContext* g_pd3dDeviceContext{nullptr};
        IDXGISwapChain* g_pSwapChain{nullptr};
        ID3D11RenderTargetView* g_mainRenderTargetView{nullptr};
    };
}

bool initialize_imgui(overlay::ImguiContext& ctx, std::string &error);
bool initialize_window(overlay::ImguiContext& ctx, std::string &error);

bool overlay::initialize(std::string &error) {
    if(imgui_context) {
        error = "overlay already initialized";
        return false;
    }

    auto context = std::make_unique<ImguiContext>();
    context->d3d11 = new D3D11Context{};

    if(!initialize_window(*context, error)) {
        return false;
    }

    if(!initialize_imgui(*context, error)) {
        return false;
    }

    imgui_context = std::move(context);
    return true;
}


bool initialize_imgui(overlay::ImguiContext& ctx, std::string &error) {
    ImGui::SetColorEditOptions(ImGuiColorEditFlags_HEX);

    ImGuiIO& io = ImGui::GetIO();
    io.IniFilename = nullptr;
    io.LogFilename = nullptr;

    ImGui::InitStyle();
    ImGui::InitColors();

    TCHAR szPath[MAX_PATH];
    if(SHGetFolderPath(nullptr, CSIDL_FONTS, nullptr, NULL, szPath) != S_OK) {
        error = "failed to find font system folder";
        return false;
    }

    std::string Path = szPath;
    std::string pArialBD{Path + "\\cambriab.ttf"};

    for (auto size = 11; size < 31; ++size)
    {
        float SCALE = 2.0f;
        ImFontConfig cfg;
        cfg.SizePixels = size * SCALE;
        //cfg.GlyphOffset.y = SCALE;

        ImFont* font = io.Fonts->AddFontFromFileTTF(pArialBD.c_str(), (float) size, &cfg, io.Fonts->GetGlyphRangesDefault());
        ctx.mapFont[size] = font;
    }

    return true;
}

bool initialize_window(overlay::ImguiContext& ctx, std::string &error) {
    ImmDisableIME(0);

    /* Create the window class and a new instance. */
    {
        ctx.wc = WNDCLASSEX{
                sizeof(WNDCLASSEX), NULL, DefWindowProc, 0L, 0L, GetModuleHandle(nullptr),
                nullptr, nullptr, nullptr, nullptr, _T("IMM"), nullptr
        };

        RegisterClassEx(&ctx.wc);

        RECT rect;
        GetClientRect(GetDesktopWindow(), &rect);

        ctx.hwnd = CreateWindowEx(WS_EX_LAYERED, ctx.wc.lpszClassName, _T("Default IME"),
                                   WS_EX_COMPOSITED | WS_EX_LAYERED | WS_EX_TRANSPARENT, rect.left, rect.top,
                                   rect.right, rect.bottom, nullptr, nullptr, GetModuleHandle(nullptr), nullptr);
        if (!ctx.hwnd) {
            error = "failed to create window";
            return false;
        }


        //GetClientRect(ctx.hwnd, &rect);
        ctx.xScreen = (float) rect.right;
        ctx.yScreen = (float) rect.bottom;
        std::cout << "Screen X: " << ctx.xScreen << " Screen Y: " << ctx.yScreen << "\n";

        SetMenu(ctx.hwnd, nullptr);
        SetWindowLongPtr(ctx.hwnd, GWL_STYLE, WS_POPUP | WS_VISIBLE | WS_CLIPSIBLINGS);
        SetWindowLongPtr(ctx.hwnd, GWL_EXSTYLE, WS_EX_LAYERED | WS_EX_TRANSPARENT | WS_EX_TOOLWINDOW | WS_EX_NOACTIVATE);
        ShowWindow(ctx.hwnd, SW_SHOW);

        SetLayeredWindowAttributes(ctx.hwnd, 0, 255, LWA_ALPHA);

        MARGINS margin = { -1 };
        DwmExtendFrameIntoClientArea(ctx.hwnd, &margin);
    }

    /* Setup d3d11 */
    {
        // setup swap chain
        DXGI_SWAP_CHAIN_DESC sd;
        ZeroMemory(&sd, sizeof(sd));
        sd.BufferCount = 2;
        sd.BufferDesc.Width = 0;
        sd.BufferDesc.Height = 0;
        sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        sd.BufferDesc.RefreshRate.Numerator = 300;
        sd.BufferDesc.RefreshRate.Denominator = 1;
        sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
        sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        sd.OutputWindow = ctx.hwnd;
        sd.SampleDesc.Count = 1;
        sd.SampleDesc.Quality = 0;
        sd.Windowed = TRUE;
        sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

        UINT createDeviceFlags = 0;
        D3D_FEATURE_LEVEL featureLevel;
        const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_1, };
        if (D3D11CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &ctx.d3d11->g_pSwapChain, &ctx.d3d11->g_pd3dDevice, &featureLevel, &ctx.d3d11->g_pd3dDeviceContext) != S_OK) {
            error = "failed to create d3d11 device";
            return false;
        }

        ID3D11Texture2D* pBackBuffer;
        ctx.d3d11->g_pSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
        ctx.d3d11->g_pd3dDevice->CreateRenderTargetView(pBackBuffer, nullptr, &ctx.d3d11->g_mainRenderTargetView);
        pBackBuffer->Release();

        float clear_color[4];
        memset(clear_color, 0, sizeof(clear_color));
        ctx.d3d11->g_pd3dDeviceContext->ClearRenderTargetView(ctx.d3d11->g_mainRenderTargetView, clear_color);
        SetWindowPos(ctx.hwnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
    }

    /* Setup ImGui for d3d11 */
    {
        ImGui::CreateContext();
        ImGui_ImplWin32_Init(ctx.hwnd);
        ImGui_ImplDX11_Init(ctx.d3d11->g_pd3dDevice, ctx.d3d11->g_pd3dDeviceContext);
    }

#ifndef _DEBUG
    //ShowWindow(GetConsoleWindow(), SW_HIDE);
#endif
    return true;

}

void render_begin() {
    assert(imgui_context);

    // Start the Dear ImGui frame
    ImGui_ImplDX11_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();

    imgui_context->wc.hCursor = LoadCursor(nullptr, IDC_ARROW);
}

void render_end() {
    assert(imgui_context);

    // Rendering
    float clearColor[4] = { 0.0f,0.0f,0.0f,0.0f };
    ImGui::Render();

    imgui_context->d3d11->g_pd3dDeviceContext->OMSetRenderTargets(1, &imgui_context->d3d11->g_mainRenderTargetView, nullptr);
    imgui_context->d3d11->g_pd3dDeviceContext->ClearRenderTargetView(imgui_context->d3d11->g_mainRenderTargetView, clearColor);
    ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
    imgui_context->d3d11->g_pSwapChain->Present(csgo_settings::useVsync, 0);

    // A little bit dirty, but D3DX11CreateShaderResourceVievFromMemory() only works after ImGui::Render() in this project
    // Reason: Debug imgui.cpp, line 10917, ImeSetInputScreenPosFn_DefaultImpl()
    // Ideally you would call it in void init()
    if (imgui_context->LogoTexture == nullptr) {
        D3DX11CreateShaderResourceViewFromMemory(imgui_context->d3d11->g_pd3dDevice, &GarhalLogo, sizeof(GarhalLogo), &imgui_context->info, nullptr, &imgui_context->LogoTexture, nullptr);
    }
}

void render_observer_entries() {
    if(!csgo_settings::show_spectators) {
        return;
    }
    assert(imgui_context);

    static std::array<std::string, 8> kObserverModeNames{
            "none",
            "deathcam",
            "freezecam",
            "fixed",
            "in-eye",
            "chase",
            "poi",
            "roaming"
    };

    ImGui::PushFont(imgui_context->mapFont[25]);
    {
        ImGui::Text("Spectator count: %llu", overlay::vars::observer_entries.size());
        if(csgo_settings::show_spectator_perspective) {
            if(ImGui::BeginTable("Spectators",  2)) {
                for(auto& entry : overlay::vars::observer_entries) {
                    ImGui::TableNextRow();

                    if(entry.is_local) {
                        ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(0, 255, 0, 255));
                    }

                    ImGui::TableNextColumn();
                    ImGui::Text("%s", entry.name.c_str());

                    ImGui::TableNextColumn();
                    if(entry.mode >= kObserverModeNames.size()) {
                        ImGui::Text("Unknown");
                    } else {
                        ImGui::Text("%s", kObserverModeNames[entry.mode].c_str());
                    }


                    if(entry.is_local) {
                        ImGui::PopStyleColor();
                    }
                }

                ImGui::EndTable();
            }
        } else {
            for(auto& entry : overlay::vars::observer_entries) {
                if(entry.is_local) {
                    ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(0, 255, 0, 255));
                }
                ImGui::Text("%s", entry.name.c_str());
                if(entry.is_local) {
                    ImGui::PopStyleColor();
                }
            }
        }
    }
    ImGui::PopFont();
}

bool isInScreen(const ImVec2& vec) {
    assert(imgui_context);
    return fabs(vec.x) <= imgui_context->xScreen && fabs(vec.y) <= imgui_context->yScreen;
}

void render_esp_entries() {
    assert(imgui_context);
    if(overlay::vars::esp_entities.empty()) {
        return;
    }

    ImDrawList* draw = ImGui::GetWindowDrawList();
    for (const ESPPlayerEntity& p : overlay::vars::esp_entities)
    {
        if (p.inGameDistance == 0)
        {
            continue;
        }

        if (p.x == p.y && p.x == 0)
        {
            continue;
        }
        if (p.x < 0 || p.y < 0)
        {
            continue;
        }

        if(!p.render) {
            continue;
        }

        float minX = p.x - 5;
        float maxX = p.x;
        float minY = p.y - 10;
        float maxY = p.y + 10;
        ImU32 color = ImGui::GetColorU32(p.color);

        // Bone render
        for (const std::pair<ImVec2, ImVec2>& bonePair : p.bones)
        {
            const ImVec2& firstBone = bonePair.first;
            const ImVec2& secondBone = bonePair.second;
            if (!isInScreen(firstBone) || !isInScreen(secondBone)) {
                continue;
            }

            if (firstBone.x == imgui_context->xScreen / 2 || firstBone.y == imgui_context->yScreen / 2) {
                continue;
            }

            if (secondBone.x == imgui_context->xScreen / 2 || secondBone.y == imgui_context->yScreen / 2) {
                continue;
            }

            if (firstBone.x < 0 || firstBone.y < 0) {
                continue;
            }

            if (secondBone.x < 0 || secondBone.y < 0) {
                continue;
            }

            for (const auto& bone : { firstBone, secondBone })
            {
                minX = min(bone.x, minX);
                minY = min(bone.y, minY);
                maxX = max(bone.x, maxX);
                maxY = max(bone.y, maxY);
            }

            draw->AddLine(
                    ImVec2(firstBone.x, firstBone.y),
                    ImVec2(secondBone.x, secondBone.y),
                    color,
                    6.f);
        }
    }
}

void render_bomb_info() {
    namespace bomb = overlay::vars::bomb;
    using BombState = bomb::State;
    if(bomb::state == BombState::None) {
        return;
    }

    ImGui::PushFont(imgui_context->mapFont[20]);
    ImGui::SetCursorPosY(imgui_context->yScreen * 0.9375 - ImGui::GetTextLineHeightWithSpacing() * 3.5);
    ImGui::Text("Bomb planted on %c", bomb::side == 0 ? 'A' : 'B');
    ImGui::Text("Damage:");
    if(bomb::damage_critical) {
        ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 0, 0, 255));
    }
    ImGui::SameLine();
    ImGui::Text("%d", bomb::damage);
    if(bomb::damage_critical) {
        ImGui::PopStyleColor();
    }
    ImGui::Text("Time: %.3f", overlay::vars::bomb::time_remaining);
    if(!bomb::defuser.has_value()) {
        ImGui::Text("Not defusing");
    } else {
        if(bomb::defuser->will_succeed) {
            ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(55, 255, 55, 255));
        }
        ImGui::Text("Defused in %.3fs by %s", bomb::defuser->time_remaining, bomb::defuser->name.c_str());
        if(bomb::defuser->will_succeed) {
            ImGui::PopStyleColor();
        }
    }
    ImGui::PopFont();
}

std::array<const char*, 20> kRankNames{
        "Not ranked",
        "Silver I",
        "Silver II",
        "Silver III",
        "Silver IV",
        "Silver Elite",
        "Silver Elite Master",

        "Gold Nova I",
        "Gold Nova II",
        "Gold Nova III",
        "Gold Nova Master",
        "Master Guardian I",
        "Master Guardian II",

        "Master Guardian Elite",
        "Distinguished Master Guardian",
        "Legendary Eagle",
        "Legendary Eagle Master",
        "Supreme Master First Class",
        "The Global Elite",

        "<< invalid >>"
};

std::array<const char*, 6> kCompTeammateColor{
    "Y",
    "P",
    "G",
    "B",
    "O",

    "U"
};

void render_player_ranks() {
    using namespace overlay::vars;
    constexpr static auto kUnitBaseW = 3840.f;
    constexpr static auto kUnitBaseH = 2160.f;

    constexpr static auto kScoreHeight = 48.f;
    constexpr static auto kScoreGap = 4.f;
    constexpr static auto kScoreEnd = 2850.f;

    constexpr static auto kCenterGapMM = 212.f;
    constexpr static auto kCenterGapNormal = 48.f;


    size_t player_count_ct = players_ct.size();
    size_t player_count_t = players_t.size();

    float player_offset = (kUnitBaseH + 5 * kScoreGap - kCenterGapMM - (float) (player_count_ct + player_count_t - 1) * (kScoreHeight + kScoreGap)) / 2;
    //ImGui::GetWindowDrawList()->AddLine(ImVec2{ 1000, imgui_context->yScreen * player_offset / kUnitBaseH, }, ImVec2{2000, imgui_context->yScreen * player_offset / kUnitBaseH }, IM_COL32(255, 0, 255, 255));

    auto display_rank = [](int rank) {
        if(rank >= kRankNames.size()) {
            /* last rank is the "invalid" rank state */
            rank = kRankNames.size() - 1;
        }

        return kRankNames[rank];
    };

    auto render_rank_list = [display_rank](const std::vector<PlayerRank>& ranks, float y_offset) {
        int sum_ranks{0};
        for(size_t index{0}; index < ranks.size(); index++) {
            auto offset_y = y_offset + (float) index * (kScoreHeight + kScoreGap);
            offset_y += 7.5; // to center the text
            ImGui::SetCursorPos(ImVec2{ imgui_context->xScreen * kScoreEnd / kUnitBaseW, imgui_context->yScreen * offset_y / kUnitBaseH });

            int color = ranks[index].color;
            if(color >= kCompTeammateColor.size() || color < 0) {
                color = kCompTeammateColor.size() - 1;
            }
            ImGui::Text("%s %s (%i Wins)", kCompTeammateColor[color], display_rank(ranks[index].rank), ranks[index].wins);
            sum_ranks += ranks[index].rank;
        }
        ImGui::Spacing();
        ImGui::SetCursorPosX(imgui_context->xScreen * kScoreEnd / kUnitBaseW);
        ImGui::Text("Sum Ranks: %i", sum_ranks);
    };

    ImGui::PushFont(imgui_context->mapFont[20]);
    render_rank_list(overlay::vars::players_ct, player_offset);
    render_rank_list(overlay::vars::players_t, player_offset + kCenterGapMM + (float) player_count_ct * (kScoreHeight + kScoreGap));
    ImGui::PopFont();
}

void overlay::render_frame() {
    assert(imgui_context);

    render_begin();
    ImGui::PushFont(imgui_context->mapFont[12]);

    // Style
    auto& style = ImGui::GetStyle();
    //style.AntiAliasedFill = FALSE;
    //style.AntiAliasedLines = TRUE;

    ImGui::SetNextWindowPos(ImVec2(0, 0));
    ImGui::SetNextWindowSize(ImVec2(imgui_context->xScreen, imgui_context->yScreen));

    static const auto dwFlags = ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoBringToFrontOnFocus | ImGuiWindowFlags_NoClipping;
    ImGui::Begin("overlay", nullptr, dwFlags);
    ImGui::SetWindowFontScale(csgo_settings::ui_scale);
    {
        render_esp_entries();
        render_observer_entries();
        render_bomb_info();

        if (overlay::vars::display_player_ranks) {
            render_player_ranks();
        }

        {
            ImGui::PushFont(imgui_context->mapFont[25]);
            ImGui::SetCursorScreenPos(ImVec2{ imgui_context->xScreen - ImGui::CalcTextSize("FPS: ###.##").x - 20, 20 });
            ImGui::Text("FPS: %.2f", ImGui::GetIO().Framerate);
            ImGui::PopFont();
        }
    }
    ImGui::End();

    render_menu(*imgui_context);

    ImGui::PopFont();
    render_end();
}

void overlay::poll_input() {
    assert(imgui_context);

    ImGuiIO& io = ImGui::GetIO();
    int mousex, mousey;

    imgui_context->g_pInputSystem->UpdateMousePos(0, 0);
    imgui_context->g_pInputSystem->GetMousePos(mousex, mousey);
    imgui_context->g_pInputSystem->PollInputState(true);

    io.MouseDown[0] = imgui_context->g_pInputSystem->InputStates[LBUTTON_DOWN];
    io.MouseClicked[0] = imgui_context->g_pInputSystem->InputStates[LBUTTON_CLICKED];

    io.MousePos.x = (float) mousex;
    io.MousePos.y = (float) mousey;

    for (int i = 0; i < 256; i++)
    {
        auto key_state = GetAsyncKeyState(i);
        io.KeysDown[i] = (key_state & 0x8000) > 0;

        if ((key_state & 0x1)) // key was pressed
        {
            io.KeysPressed[i] = true;
            /*
                This is a bad way of input text
                Ideally need to write a function that
                1) Checks if control keys are pressed (arrows left/right/up/down, enter, backspace, etc) and exclude them
                2) Check if shift is pressed (0xA0 & 0x8000) and input corresponding characters (like "shift + 8" = "*")
            */
            io.InputQueueCharacters.push_back(i);

        } else {
            io.KeysPressed[i] = false;
        }
    }

    overlay::vars::display_player_ranks = ImGui::IsCustomKeyPressed(VK_TAB, true);
}