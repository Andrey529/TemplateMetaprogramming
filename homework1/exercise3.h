#ifndef TEMPLATEMETAPROGRAMMING_EXERCISE3_H
#define TEMPLATEMETAPROGRAMMING_EXERCISE3_H

#include <utility>

template<typename T, std::size_t N>
struct remove_pointers {
    using type = T;
};

template<typename T, std::size_t N>
struct remove_pointers<T*, N> {
    using type = typename remove_pointers<T, N-1>::type;
};

template<typename T, std::size_t N>
struct remove_pointers<T* const, N> {
    using type = typename remove_pointers<T, N-1>::type;
};

template<typename T>
struct remove_pointers<T*, 0> {
    using type = T*;
};

template<typename T>
struct remove_pointers<T* const, 0> {
    using type = T*;
};

template<typename T, std::size_t N>
using remove_pointers_t = typename remove_pointers<T, N>::type;

#endif //TEMPLATEMETAPROGRAMMING_EXERCISE3_H
