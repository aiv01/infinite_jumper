#ifndef AIV_COMMAND
#define AIV_COMMAND


namespace aiv {


struct game_object;


struct command {
    virtual ~command() = default;
    virtual void apply(game_object &) = 0;
};


}


#endif
