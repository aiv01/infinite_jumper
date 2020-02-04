#include <SDL2/SDL.h>
#include "env.h"


namespace aiv {


env::env(): init{} {
    init = (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS | SDL_INIT_TIMER) == 0);
}


env::~env() {
    if(init) {
        SDL_Quit();
    }
}


env::operator bool() {
    return init;
}


}
