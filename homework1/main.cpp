#include <iostream>
#include "exercise1.h"
#include "exercise2.h"
#include "exercise3.h"

int main(int argc, char **argv) {
    S<int, 5, std::array> s;
    std::cout << "Exercise 1: " << s.da() << std::endl;

    // Exercise 2:
    static_assert(is_array_of_arrays<int[][5]>::value         == true);
    static_assert(is_array_of_arrays<const int[][5]>::value   == true);
    static_assert(is_array_of_arrays<int[4][5]>::value        == true);
    static_assert(is_array_of_arrays<const int[4][5]>::value  == true);
    static_assert(is_array_of_arrays<int[]>::value            == false);
    static_assert(is_array_of_arrays<int[5]>::value           == false);
    static_assert(is_array_of_arrays<int**>::value            == false);

    // Exercise 3:
    static_assert(std::is_same<remove_pointers<bool***, 2>::type, bool*>::value);
    static_assert(std::is_same<remove_pointers<bool*, 100500>::type, bool>::value);
    static_assert(std::is_same<remove_pointers<bool***, 0>::type, bool***>::value);
    static_assert(std::is_same<remove_pointers<bool****, 4>::type, bool>::value);
    static_assert(std::is_same<remove_pointers<bool**** const, 4>::type, bool>::value);

}