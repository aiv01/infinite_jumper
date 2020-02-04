#ifndef AIV_INPUT_COMPONENT
#define AIV_INPUT_COMPONENT


namespace aiv {


struct game_object;


struct input_component {
    virtual ~input_component() = default;
    virtual void update(game_object &) = 0;
};


}


#endif
