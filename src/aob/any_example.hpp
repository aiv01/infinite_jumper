class any {
    template<typename T>
    static void destroy(void *ptr) { delete static_cast<T *>(ptr); }

    template<typename T>
    static void * copy(void *ptr) { return new T{*static_cast<T*>(ptr)}; }

public:
    any(): ptr{nullptr}, destr{nullptr}, cpy{nullptr} {}
    ~any() { if(destr) destr(ptr); }

    any(const any &other): any{} {
        if(other.cpy) {
            ptr = other.cpy(other.ptr);
            cpy = other.cpy;
            destr = other.destr;
        }
    }

    any(any &&other): ptr{other.ptr}, destr{other.destr} {
        other.ptr = nullptr;
    }

    any & operator=(const any &other) {
        if(&other != this) {
            auto tmp{other};
            std::swap(tmp, *this);
        }

        return *this;
    }

    any & operator=(any &&other) {
        if(&other != this) {
            auto tmp{std::move(other)};
            std::swap(tmp, *this);
        }

        return *this;
    }

    template<typename T>
    any & operator=(T value) {
        ptr = new T{value};
        destr = &destroy<T>;
        copy = &copy<T>;
    }

private:
    using destr_type = void(void *);
    using copy_type = void *(void *);

    copy_type *cpy;
    destr_type *destr;
    void *ptr;
};
