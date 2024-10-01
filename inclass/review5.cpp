#include <iostream>
#include <cstring>

//creating library for mystrlen
//create 2 files
// mystring.h and mystring.cpp
//split emacs on 2 screens

#include "mystring.h"

int main()
{

    char x[100] = "abc";
    std::cout << '[' << x << ']' << '\n';
    std::cout << strlen(x) << '\n';

    for( int i = 0; i < strlen(x); ++i)
    {
        x[i] = ' ';
    }
    std::cout << '[' << x << ']' << '\n';

    std::cout << strlen(x) << '\n';
    std::cout << mystrlen(x) << '\n';
    
    return 0;
}
