#include "vec2.h"


namespace aiv {


vec2::vec2(int value)
    : px{value}, py{value} 
{}

vec2::vec2(int px_, int py_)
    : px{px_}, py{py_}
{}

vec2 vec2::operator+(const vec2 &other) const {
    return vec2{px + other.px, py + other.py};
}

vec2 & vec2::operator+=(const vec2 &other) {
    px += other.px;
    py += other.py;
    return *this;
}

    // ...

int vec2::x() const { return px; }
int vec2::y() const { return py; }


}
