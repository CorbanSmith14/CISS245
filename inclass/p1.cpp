#include <iostream>


void f(int * x)
{
    std::cout << sizeof(x) << '\n';
    x[0] = 0;
}


int  main()
{
    int x[] = {3,2,5};

    std::cout << x << '\n';
    std::cout << &x[0] << '\n';
    std::cout << sizeof(x) << '\n';
    f(x);
    std::cout << x[0] << '\n';
    
    return 0;
}


// void swap3(int *a, int *b)
// {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

// int main()
// {
//     int x = 0, y = 42;
//     swap3(&x,&y);
//     std::cout << x << ' ' << y << '\n';

    
//     return 0;
// }
