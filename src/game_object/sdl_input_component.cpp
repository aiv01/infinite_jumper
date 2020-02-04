#include <SDL2/SDL_events.h>
#include "sdl_input_component.h"
#include "command.h"


namespace aiv {


sdl_input_component::sdl_input_component(std::unordered_map<SDL_Scancode, std::unique_ptr<command>> mapping)
    : input_to_command{std::move(mapping)}
{}


void sdl_input_component::update(game_object &go) {
    SDL_Event event;

    while(SDL_PollEvent(&event)) {
        if(auto it = input_to_command.find(event.key.keysym.scancode); it != input_to_command.cend()) {
            it->second->apply(go);
        }
    }
}


}
