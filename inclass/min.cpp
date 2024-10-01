#include <iostream>

inline
int max(int x, int y)
{

    return (x >= y ? x : y);
}

int main()
{
    int m = max(3,5); //effect is == // int m = (3 >= 5 ? : 5)
    std::cout << m << '\n';

    return 0;
}
