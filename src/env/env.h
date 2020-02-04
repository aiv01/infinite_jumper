#ifndef AIV_ENV
#define AIV_ENV


namespace aiv {


struct env final {
    // RAII
    env();
    ~env();

    explicit operator bool();

private:
    bool init;
};


}


#endif
