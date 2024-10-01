#include "mystring.h"

int mystrlen(char x[])
{
    int len = 0;
    while(x[len] != '\0')
    {
        ++len;
    }
    return len;
}

