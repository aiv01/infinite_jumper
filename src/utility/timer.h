#ifndef AIV_TIMER
#define AIV_TIMER


#include <SDL2/SDL.h>


namespace aiv {


struct timer {
    timer();
    ~timer() = default;

    Uint32 ticks() const;
    Uint32 wall() const;

    void pause();
    void unpause();

private:
    Uint32 offset;
    Uint32 last;
};


}


#endif
