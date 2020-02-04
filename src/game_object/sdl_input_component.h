#ifndef AIV_SDL_INPUT_COMPONENT
#define AIV_SDL_INPUT_COMPONENT


#include <memory>
#include <unordered_map>
#include <SDL2/SDL_keyboard.h>
#include "input_component.h"


namespace aiv {


struct game_object;
struct command;


struct sdl_input_component final: input_component {
    sdl_input_component(std::unordered_map<SDL_Scancode, std::unique_ptr<command>>);

    void update(game_object &) override;

private:
    std::unordered_map<SDL_Scancode, std::unique_ptr<command>> input_to_command;
};


}


#endif
