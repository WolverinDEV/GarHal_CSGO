//
// Created by WolverinDEV on 11/06/2023.
//

#pragma once

#include <string>
#include <vector>

#include <imgui.h>
#include <imgui_impl_win32.h>
#include <imgui_impl_dx11.h>
#include <imgui_extensions.h>
#include "InputSystem.h"
#include <d3d11.h>
#include <d3dx11tex.h>
#include <dinput.h>
#include <tchar.h>
#include <string>
#include <map>
#include <fstream>
#include <ShlObj.h>
#include <array>
#include "icons.h"

struct ESPPlayerEntity;
struct ObserverEntry;

namespace overlay {
    struct D3D11Context;

    // FIXME: Abstract away the d3d11 data!
    struct ImguiContext {
        explicit ImguiContext() {
            this->g_pInputSystem = new InputSystem();
            memset(&this->wc, 0, sizeof(this->wc));
        }

        /* Handle*/
        WNDCLASSEX wc{};
        HWND hwnd{};
        D3D11Context* d3d11{nullptr};

        InputSystem* g_pInputSystem;

        /* Fonts*/
        std::map<int, ImFont*> mapFont{};
        ImFont* icons{nullptr};

        float xScreen{0};
        float yScreen{0};
        D3DX11_IMAGE_LOAD_INFO info;
        ID3D11ShaderResourceView* LogoTexture{nullptr};
    };

    extern bool initialize(std::string& /* error */);

    extern void poll_input();
    extern void render_frame();

    namespace settings {
        /* no settings available */
    }

    namespace vars {
        extern std::vector<ESPPlayerEntity> esp_entities;
        extern std::vector<ObserverEntry> observer_entries;
    }
}