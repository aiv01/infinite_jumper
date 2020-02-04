#ifndef AIV_JUMP_COMMAND
#define AIV_JUMP_COMMAND


#include "command.h"


namespace aiv {


struct game_object;


struct jump_command final: command {
    static const double impulse;
    void apply(game_object &) override;
};


}


#endif
