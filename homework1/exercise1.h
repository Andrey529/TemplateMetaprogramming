#ifndef TEMPLATEMETAPROGRAMMING_EXERCISE1_H
#define TEMPLATEMETAPROGRAMMING_EXERCISE1_H

#include <utility>
#include <array>

template<typename T1, std::size_t N, template<typename, std::size_t> typename T2>
struct S {
    bool da() {
        return std::is_same_v<std::array<T1, N>, T2<T1, N>>;
    }
};

#endif //TEMPLATEMETAPROGRAMMING_EXERCISE1_H
