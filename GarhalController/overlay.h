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
#include <optional>
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

        struct PlayerRank {
            uint32_t entity_index;

            int rank;
            int wins;

            int color;

            int score;
            int kills;
            int deaths;
        };
        extern std::vector<PlayerRank> players_ct;
        extern std::vector<PlayerRank> players_t;
        extern bool display_player_ranks;

        namespace bomb {
            enum struct State {
                None,
                Active,
                Defused,
                Detonated,
            };

            struct Defuser {
                std::string name;

                float time_total;
                float time_remaining;

                bool will_succeed;
            };

            extern State state;
            extern int side;

            extern int damage;
            extern bool damage_critical;

            extern float time_remaining;
            extern std::optional<Defuser> defuser;
        }
    }
}