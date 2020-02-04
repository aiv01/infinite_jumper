#include "quit_command.h"


namespace aiv {


quit_command::quit_command(bool &ref)
    : exit{&ref}
{}


void quit_command::apply(game_object &) {
    *exit = true;
}


}
