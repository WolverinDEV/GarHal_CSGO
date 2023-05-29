set(IMGUI_DIR "${CMAKE_SOURCE_DIR}/Libraries/imgui/")
add_library(imgui STATIC)

target_sources(imgui
    PRIVATE
        ${IMGUI_DIR}/imgui_demo.cpp
        ${IMGUI_DIR}/imgui_draw.cpp
        ${IMGUI_DIR}/imgui_extensions.cpp
        ${IMGUI_DIR}/imgui_tables.cpp
        ${IMGUI_DIR}/imgui_widgets.cpp
        ${IMGUI_DIR}/imgui.cpp

    PRIVATE
        ${IMGUI_DIR}/imgui_impl_dx11.cpp
        ${IMGUI_DIR}/imgui_impl_win32.cpp
)

target_include_directories(imgui
        PUBLIC ${IMGUI_DIR}
        PUBLIC ${IMGUI_DIR}/backends
        PUBLIC ${SDL3_DIR}/include
)