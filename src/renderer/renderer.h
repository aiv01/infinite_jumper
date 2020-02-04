#ifndef AIV_RENDERER
#define AIV_RENDERER


#include <SDL2/SDL.h>


struct SDL_Renderer;
struct SDL_Window;
struct SDL_Rect;


namespace aiv {


struct renderer final {
    renderer();
    ~renderer();

    bool color(Uint8, Uint8, Uint8, Uint8);
    bool draw(const SDL_Rect &) const;
    void present() const;
    bool clear() const;

    explicit operator bool();

private:
    SDL_Renderer *rend;
    SDL_Window *window;
    bool init;
};


}


#endif
