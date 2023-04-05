#ifndef TEMPLATEMETAPROGRAMMING_EXERCISE2_H
#define TEMPLATEMETAPROGRAMMING_EXERCISE2_H

#include <utility>

template<typename T>
struct is_array_of_arrays {
    static const bool value = false;
};

template<typename T, std::size_t N, std::size_t M>
struct is_array_of_arrays<T[N][M]> {
    static const bool value = true;
};

template<typename T, std::size_t N>
struct is_array_of_arrays<T[][N]> {
    static const bool value = true;
};



#endif //TEMPLATEMETAPROGRAMMING_EXERCISE2_H
