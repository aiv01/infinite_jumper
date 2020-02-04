#ifndef AIV_STANDARD_PHYSICS_COMPONENT
#define AIV_STANDARD_PHYSICS_COMPONENT


#include "physics_component.h"


namespace aiv {


struct standard_physics_component: physics_component {
    void update(game_object &, timer &) override;
};


}


#endif
