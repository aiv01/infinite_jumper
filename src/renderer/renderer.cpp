#include <SDL2/SDL_render.h>
#include "renderer.h"


namespace aiv {


renderer::renderer(): init{} {
    init = (SDL_CreateWindowAndRenderer(1280, 1920, SDL_WINDOW_FULLSCREEN, &window, &rend) == 0);
}


renderer::~renderer() {
    if(init) {
        SDL_DestroyRenderer(rend);
        SDL_DestroyWindow(window);
    }
}


bool renderer::color(Uint8 r, Uint8 g, Uint8 b, Uint8 alpha) {
    return (SDL_SetRenderDrawColor(rend, r, g, b, alpha) == 0);
}


bool renderer::draw(const SDL_Rect &rect) const {
    return (SDL_RenderDrawRect(rend, &rect) == 0);
}


void renderer::present() const {
    SDL_RenderPresent(rend);
}


bool renderer::clear() const {
    return (SDL_RenderClear(rend) == 0);
}


renderer::operator bool() {
    return init;
}


}
