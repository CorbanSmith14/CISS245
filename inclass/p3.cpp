#include <iostream>

int main()
{
    int x[] = {2,3,5,7,11,13};
    int *p = &x[4]; // get number 11

    std::cout << &x[5] << ' ' << &x[3] << '\n'; // get address of 13 and 7

    char x[] = "hello world";
    char * p = &x[6]; // get w
    // or
    char * p = x + 6;
    // or
    char * p = &x[0] + 6;



    
    
    return 0;
}
