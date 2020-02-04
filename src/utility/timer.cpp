#include <SDL2/SDL_timer.h>
#include "timer.h"


namespace aiv {


timer::timer(): offset{}, last{} {
    offset = SDL_GetTicks();
}



Uint32 timer::ticks() const {
    return SDL_GetTicks() - offset;
}


Uint32 timer::wall() const {
    return SDL_GetTicks();
}


void timer::pause() {
    if(last == Uint32{}) {
        last = SDL_GetTicks();
    }
}


void timer::unpause() {
    if(last != Uint32{}) {
        offset += (SDL_GetTicks() - last);
        last = {};
    }
}


}
