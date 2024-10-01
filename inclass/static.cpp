#include <iostream>
#include "C.h"

// void f()
// {
//     static int x = 0;
//     int y = 0;
//     x++; y++;
//     std::cout << x << ' ' << y << '\n';
// }

int main()
{
    // f(); f(); f(); f(); f();
    C c0(0);
    C c42(42);
    C c99(99);

    std::cout << c0.x << '\n';
    std::cout << c42.x << '\n';
    std::cout << c99.x << '\n';

    std::cout << c0.y << ' ' << c0.z << '\n';
    std::cout << c42.y << ' ' << c42.z << '\n';
    std::cout << c99.y << ' ' << c99.z << '\n';
    c0.y = 567;
    std::cout << c0.y << ' ' << c0.z << '\n';
    std::cout << c42.y << ' ' << c42.z << '\n';
    std::cout << c99.y << ' ' << c99.z << '\n';

    std::cout << C::y << '\n';
    std::cout << C::z << '\n';
    C::z = 8888;
    std::cout << C::y << '\n';
    std::cout << C::z << '\n';
    std::cout << c0.y << ' ' << c0.z << '\n';
    std::cout << c42.y << ' ' << c42.z << '\n';
    std::cout << c99.y << ' ' << c99.z << '\n';
    
    return 0;
}
