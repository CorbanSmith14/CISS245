#include <iostream>

void printhead(int n = 1)
{
    std::cout << n << '\n';
}

int main()
{
    printhead();
    printhead(42);
    
    return 0;
}
