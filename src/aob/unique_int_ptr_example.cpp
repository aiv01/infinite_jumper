#include <utility>


struct unique_int_ptr {
    unique_int_ptr()
        : ptr{nullptr}
    {}

    ~unique_int_ptr() {
        delete ptr;
    }

    unique_int_ptr(int *v)
        : ptr{v}
    {}

    unique_int_ptr(const unique_int_ptr &) = delete;
    unique_int_ptr & operator=(const unique_int_ptr &) = delete;

    unique_int_ptr(unique_int_ptr &&other) {
        ptr = other.ptr;
        other.ptr = nullptr;
    }

    unique_int_ptr & operator=(unique_int_ptr &&other) {
        if(&other != this) {
            auto tmp{std::move(other)};
            std::swap(tmp, *this);
        }

        return *this;
    }

    const int & operator*() const {
        return *ptr; // -> int &
    }

    int & operator*() {
        return *ptr;
    }

    operator bool() const {
        return (ptr == nullptr);
    }

    void reset(int *v) {
        unique_int_ptr tmp{v};
        std::swap(tmp, *this);
    }

private:
    int *ptr;
};


int main() {
    unique_int_ptr ptr{new int};
    *ptr = 3;
    int v = *ptr;
    ptr.reset(new int{42});

    unique_int_ptr other{std::move(ptr)};
    // ptr == false, contiene un nullptr

    ptr = std::move(other);

    // ...
}

