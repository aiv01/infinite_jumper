#include "../utility/types.h"


namespace aiv {


struct renderer {
    void draw_color(uint8, uint8, uint8, uint8) const;
    void draw_rect(const rect &) const;
    void draw_texture(const texture &) const;
    void clear();
};


}
