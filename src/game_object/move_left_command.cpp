#include "move_left_command.h"
#include "game_object.h"


namespace aiv {


void move_left_command::apply(game_object &object) {
    object.vx(-1);
}


}
