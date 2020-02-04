#include <memory>
#include <unordered_map>
#include <SDL2/SDL.h>
#include "env/env.h"
#include "game_object/command.h"
#include "game_object/game_object.h"
#include "game_object/quit_command.h"
#include "game_object/jump_command.h"
#include "game_object/move_left_command.h"
#include "game_object/move_right_command.h"
#include "game_object/sdl_input_component.h"
#include "game_object/standard_physics_component.h"
#include "renderer/renderer.h"
#include "utility/timer.h"


int main() {
    aiv::env env{};
    aiv::renderer renderer{};

    if(env && renderer) {
        aiv::timer timer;
        bool exit{false};

        std::unordered_map<SDL_Scancode, std::unique_ptr<aiv::command>> mapping;
        mapping[SDL_SCANCODE_END] = std::make_unique<aiv::quit_command>(exit);
        // TODO ...

        aiv::game_object obj{};
        obj.input(std::make_unique<aiv::sdl_input_component>(std::move(mapping)));
        obj.physics(std::make_unique<aiv::standard_physics_component>());

        while(!exit) {
            renderer.color(0, 0, 0, 1);
            renderer.clear();
            renderer.color(255, 0, 0, 1);

            obj.update(timer);
            obj.draw(renderer);

            renderer.present();
        }

        // TODO ...
    }

    return !env;
}
