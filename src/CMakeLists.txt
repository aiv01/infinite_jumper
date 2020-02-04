file(GLOB_RECURSE DINO_HEADERS *.hpp *.h)

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
    PARENT_SCOPE
)

