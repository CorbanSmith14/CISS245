#include <iostream>


//sub array printing

int sub_array(int x[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        for(int j = i + 1; j < size; ++j)
        {
            std::cout << j << ' ' ;
            
        }
    }

}

//review bubblesort and binary search
//array google timeline example

int sum(int x[], int start, int end)
{
    int s = 0;
    for( int i = start; i < end; +++i)
    {
        s += x [i];
    }
    return s;
}

//array prime 1D

int sum(int x[], int n)
{
    int s = 0;
    for ( int i = 0; i < n; ++i)
    {
        s += x[i];
    }
    return s;
}

// ex 4.3 primes up to x

// int prime_count(int x)
// {
//     if (x <= 1)
//         return false;
//     else
//         for (int y = 0; y <= x; ++y)
//         {
            
//         }
    
}

//int n is prime

// int isprime(int n)
// {

//     if (n <= 1)
//         return false;
//     else
//         for (int d = 2; d <= (n * n); ++d)
//         {
//             if ( n % d == 0)
//                 return false;
        
//         }
//     return true;
// }


//divisor printing

// for ( int d = 0; d < n; ++d)
// {
//     if( n % d == 0)
//     {
//         std::cout << d << ' ';
//     }
// }



int main()
{
    return 0;
}
