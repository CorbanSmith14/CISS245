#include <iostream>
#include <ctime>
#include <cstdlib>



char rand_dir()
{
    char dirs{'N','S','E','W'};
    returndirs[rand() % 4];
}
char rand_dir()
{
    switch(rand() % 4)
    {
        case 0:
            return 'N';
        case 1:
            return 'E';
        case 2:
            return 'S';
        case 3:
            return 'W';
                
    }
    
}

int main()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cout << rand_dir() << '\n';  
    }
    return  0;
}

// int main()
// {
//     srand((unsigned int)time(NULL));
          
//     for (int i = 0; i < 10; ++i)
//     {
//         std::cout << cointoss();
//     }
    
    
//     return 0;
// }
