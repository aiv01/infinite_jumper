#ifndef AIV_MOVE_RIGHT_COMMAND
#define AIV_MOVE_RIGHT_COMMAND


#include "command.h"


namespace aiv {


struct game_object;


struct move_right_command final: command {
    void apply(game_object &) override;
};


}


#endif
