#ifndef TEMPLATEMETAPROGRAMMING_EXERCISE1_H
#define TEMPLATEMETAPROGRAMMING_EXERCISE1_H

#include <type_traits>

template<class T, class = void, class = void, class = void, class = void, class = void, class = void, class = void>
struct has_container_aliases_impl : std::false_type { };


template<class T>
struct has_container_aliases_impl<T, std::void_t<typename T::value_type>, std::void_t<typename T::reference>,
                                     std::void_t<typename T::const_reference>, std::void_t<typename T::iterator>,
                                     std::void_t<typename T::const_iterator>, std::void_t<typename T::difference_type>,
                                     std::void_t<typename T::size_type>> : std::true_type { };


template<class T>
struct has_container_aliases : has_container_aliases_impl<T> { };


template<class T>
const bool has_container_aliases_v = has_container_aliases<T>::value;


#endif //TEMPLATEMETAPROGRAMMING_EXERCISE1_H
