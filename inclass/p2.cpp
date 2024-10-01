#include <iostream>



int main()
{
    int x[] = {3,5,1};
    int *p = &x[2];
    *p = 0;
    p = new int;
    std::cout << p << '\n';
    *p = -1;
    std::cout << *p << '\n';
    

    
    return 0;
}




// void f(int * x)
// {
//     x[0] = 42;
//     *(x + 0)= 42;
//     *(x + 1) = 43;
//     *(x + 2) = 44;
    
// }

// int main()
// {
//     int x[] = {3,5,1};
//     f(x);
//     std::cout << x[0] << ' ' << x[1] << ' ' << x[2] << '\n';
    
//     return 0;
// }
