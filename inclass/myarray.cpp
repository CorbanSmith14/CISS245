#include <iostream>
#include "myarray.h"



int main()
{
    int x[1000] = {};
    int x_size = 0;
    
    myarray_init(x, x_size); // set x_size to 0

    myarray_pushback(x, x_size, 42);
    myarray_println(x,x_size); //print (42)
    myarray_pushback(x, x_size, 3);
    myarray_println(x,x_size); //print (42, 3)
    myarray_pushback(x, x_size, -1);
    myarray_println(x,x_size); //print (42, 3, -1)
    
    return 0;
}
