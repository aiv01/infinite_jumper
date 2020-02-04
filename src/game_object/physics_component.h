#ifndef AIV_PHYSICS_COMPONENT
#define AIV_PHYSICS_COMPONENT


namespace aiv {


struct timer;
struct game_object;


struct physics_component {
    virtual ~physics_component() = default;
    virtual void update(game_object &, timer &) = 0;
};


}


#endif
