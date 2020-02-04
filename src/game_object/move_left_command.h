#ifndef AIV_MOVE_LEFT_COMMAND
#define AIV_MOVE_LEFT_COMMAND


#include "command.h"


namespace aiv {


struct game_object;


struct move_left_command final: command {
    void apply(game_object &) override;
};


}


#endif
