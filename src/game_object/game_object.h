#ifndef AIV_GAME_OBJECT
#define AIV_GAME_OBJECT


#include <utility>
#include <memory>
#include <SDL2/SDL_rect.h>


namespace aiv {


struct timer;
struct renderer;
struct input_component;
struct physics_component;


struct game_object {
    void update(timer &);
    void draw(renderer &);

    SDL_Rect & identity();
    const SDL_Rect & identity() const;

    double vy() const;
    void vy(double);

    int vx() const;
    void vx(int);

    void input(std::unique_ptr<input_component>);
    void physics(std::unique_ptr<physics_component>);

private:
    std::unique_ptr<input_component> cinput;
    std::unique_ptr<physics_component> cphysics;
    std::pair<double, int> vel;
    SDL_Rect ident;
};


}


#endif
