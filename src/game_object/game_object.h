#ifndef GAME_OBJECT
#define GAME_OBJECT


#include "vec2.h"


namespace aiv {


struct game_object {
    virtual ~game_object() = default;

    virtual void update(float) = 0;
    virtual void draw() const = 0;

    vec2 position;
};


}


#endif
