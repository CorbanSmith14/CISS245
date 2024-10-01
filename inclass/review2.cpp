#include <iostream>

//Fraction calculator

//Euclid's algorythm 

// int gcd(int a, int b)
// {
//     for (int d = min(a,b); d >=1; --d)
//     {
//         if (a % d == 0 && b % d == 0)
//         {
//             return d;
//         }
//     }
//     return -1;
// }

// void calculator(int n0,int d0,int n1,int d1)
// {

//    int  n2 = (n0 * n1) + (n1 * d0);
//    int  d2 = d0 * d1;
//    int g = gcd(n2,d2);
//    n2/=g;
//    d2/=g;
    
// }

// int main()
// {
//     std::cin >> n0, d0, n1, d1;

//     std::cout << calculator;
//     return 0;
// }



//target count in int 

// int count( int n, int target)
// {
//     int c = 0;
//     while (n > 0)
//     {
//         int digit = n % 10;
//         if (digit == target)
//         {
//             ++c;
//             n /= 10;
//         }
//         return c;
//     }

// }





//even int count 

// int even_digits(int n)
// {
//     if (n == 0) return 1;
//     else
//     {
//         int even_c = 0;
//         while (n > 0)
//         {
//             int digit = n % 10;
//             if (digit % 2 == 0) ++ even_c;
//             {
//                 n /= 10;
//             }
//             return even_c;
//         }
//     }
// }

// int main()
// {
//     int n,count;

//     std::cout << "Enter digit: ";
//     std::cin >> n;

//     std::cout << even_digits << '\n';
    

//     return 0;
// }
