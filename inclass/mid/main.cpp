#include <iostream>


// void my_new_operator(int * p)
// {
//     p = new int;
// }
// int main()
// {
//     int * p;
//     my_new_operator(p);
//     *p = 42;
//     ... // ignore the rest of the code
        
// }


void my_new_operator(int *&p )
{
    p = new int;
}
int main()
{
    int * p;
    my_new_operator(p);
    *p = 42;
    delete p;
    //... // ignore the rest of the code
}


// void nextprime(int * p)
// {
//     int num = *p + 1; // Start checking from the next number after *p
//     while (true)
//     {
//         bool isPrime = true;
//         for (int i = 2; i * i <= num; ++i)
//         {
//             if (num % i == 0)
//             {
//                 isPrime = false;
//                 break;
//             }
//         }
//         if (isPrime)
//         {
//             *p = num; // Update *p to the next prime number found
//             return;
//         }
//         ++num; // Check the next number
// }
// int main()
// {
// int x = 7;
// nextprime(&x); // x becomes 11
// std::cout << x << std::endl;
// nextprime(&x); // x becomes 13
// std::cout << x << std::endl;
// nextprime(&x); // x becomes 17
// std::cout << x << std::endl;
// return 0;
// }
