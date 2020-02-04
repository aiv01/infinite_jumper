#ifndef VEC_2
#define VEC_2


namespace aiv {


struct vec2 {
    vec2() = default;

    vec2(int);
    vec2(int, int);

    vec2 operator+(const vec2 &) const;
    vec2 & operator+=(const vec2 &);

    // ...

    int x() const;
    int y() const;

private:
    int px;
    int py;
};


}


#define VEC_2
