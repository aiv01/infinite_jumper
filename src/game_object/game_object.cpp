#include "../renderer/renderer.h"
#include "input_component.h"
#include "physics_component.h"
#include "game_object.h"


namespace aiv {


void game_object::update(timer &timer) {
    cinput->update(*this);
    cphysics->update(*this, timer);
}


void game_object::draw(renderer &renderer) {
    renderer.draw(ident);
}


SDL_Rect & game_object::identity() {
    return ident;
}


const SDL_Rect & game_object::identity() const {
    return ident;
}


double game_object::vy() const {
    return vel.first;
}


void game_object::vy(double value) {
    vel.first = value;
}


int game_object::vx() const {
    return vel.second;
}


void game_object::vx(int value) {
    vel.second = value;
}


void game_object::input(std::unique_ptr<input_component> cmp) {
    cinput = std::move(cmp);
}


void game_object::physics(std::unique_ptr<physics_component> cmp) {
    cphysics = std::move(cmp);
}


}
