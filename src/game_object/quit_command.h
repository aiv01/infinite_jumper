#ifndef AIV_QUIT_COMMAND
#define AIV_QUIT_COMMAND


#include "command.h"


namespace aiv {


struct game_object;


struct quit_command final: command {
    quit_command(bool &);
    void apply(game_object &) override;

private:
    // si usa un * invece di un & perché le reference rendono la classe
    // non copiabile (a meno di costruttori user-defined)
    bool *exit;
};


}


#endif
