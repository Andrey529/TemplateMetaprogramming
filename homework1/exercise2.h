#ifndef TEMPLATEMETAPROGRAMMING_EXERCISE2_H
#define TEMPLATEMETAPROGRAMMING_EXERCISE2_H

#include <utility>

template<typename T>
struct is_array_of_arrays : std::false_type { };

template<typename T, std::size_t N, std::size_t M>
struct is_array_of_arrays<T[N][M]> : std::true_type { };

template<typename T, std::size_t N>
struct is_array_of_arrays<T[][N]> : std::true_type { };

template<typename T>
const bool is_array_of_arrays_v = is_array_of_arrays<T>::value;

#endif //TEMPLATEMETAPROGRAMMING_EXERCISE2_H
