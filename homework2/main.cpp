#include <vector>
#include "exercise1.h"
//#include "exercise2.h"
//#include "exercise3.h"

int main(int argc, char **argv) {

    // Exercise 1:
    struct Test1 { };
    struct Test2 {
        using value_type = int;
    };

    struct Test3 {
        using value_type = int;
        using reference = int&;
        using const_reference = const int&;
        using iterator = int*;
        using const_iterator = const int*;
        using difference_type = std::ptrdiff_t;
        using size_type = std::size_t;
    };

    static_assert(has_container_aliases_v<Test1> == false);
    static_assert(has_container_aliases_v<Test2> == false);
    static_assert(has_container_aliases_v<Test3> == true);
    static_assert(has_container_aliases_v<std::vector<int>> == true);

    // Exercise 2:

    // Exercise 3:
}