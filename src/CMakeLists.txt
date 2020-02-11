file(GLOB_RECURSE AIV_HEADERS *.hpp *.h)

set(
    AIV_SOURCES
    ${AIV_HEADERS}
    ${aiv_SOURCE_DIR}/src/main.cpp
    ${aiv_SOURCE_DIR}/src/env/env.cpp
    ${aiv_SOURCE_DIR}/src/game_object/quit_command.cpp
    ${aiv_SOURCE_DIR}/src/game_object/jump_command.cpp
    ${aiv_SOURCE_DIR}/src/game_object/move_left_command.cpp
    ${aiv_SOURCE_DIR}/src/game_object/move_right_command.cpp
    ${aiv_SOURCE_DIR}/src/game_object/game_object.cpp
    ${aiv_SOURCE_DIR}/src/game_object/sdl_input_component.cpp
    ${aiv_SOURCE_DIR}/src/game_object/standard_physics_component.cpp
    ${aiv_SOURCE_DIR}/src/renderer/renderer.cpp
    ${aiv_SOURCE_DIR}/src/utility/timer.cpp
)

add_executable(always_in_vertical)

target_sources(always_in_vertical PRIVATE ${AIV_SOURCES})
target_include_directories(always_in_vertical PRIVATE SDL2main SDL2)
target_link_libraries(always_in_vertical PRIVATE SDL2main SDL2)

install(
    DIRECTORY
        ${aiv_SOURCE_DIR}/assets/png
        ${aiv_SOURCE_DIR}/assets/ttf
    DESTINATION ${aiv_BINARY_DIR}/game
)

install(
    TARGETS always_in_vertical
    DESTINATION ${aiv_BINARY_DIR}/game
)

source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" FILES ${AIV_SOURCES})
