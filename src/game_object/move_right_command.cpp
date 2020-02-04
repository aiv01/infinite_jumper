#include "move_right_command.h"
#include "game_object.h"


namespace aiv {


void move_right_command::apply(game_object &object) {
    object.vx(1);
}


}
