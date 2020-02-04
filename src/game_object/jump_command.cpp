#include "jump_command.h"
#include "game_object.h"


namespace aiv {


const double jump_command::impulse = -2.;


void jump_command::apply(game_object &object) {
    object.vy(impulse);
}


}
