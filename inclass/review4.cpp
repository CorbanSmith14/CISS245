#include <iostream>

// x = {5,-10,3,2,7,-1}

//formula for number of sub arrays within array = (n(n +1)) / 2;

// 1 dimensional array

//max subarray problem 1969

void max_subarray_sum(int x[], int n, int & max, int & max_i, int & max_j)
{
    for(int i = 0; i < n; ++i) //starting index of sub array
    {
        for(int j = i + 1; j <= n; ++j) // ending index off sub array
        {
            int s = 0;
            for(int k = i; k < j; ++k)
            {
                s += x[k];
            }
            if (s > max)
            {
                max = s;
                max_i = i;
                max_j = j;
            }
        }
    }
}

int main()
{
    int n = 5;
    int x[1000] = {5, 3, -7, 2, 1};
    int max = 0;
    int max_i = 0;
    int max_j = 0;

    max_subarray_sum(x, n, max, max_i, max_j);
  
    std::cout << "Final: " << max << ' ' << max_i << ' ' << max_j << '\n';
    return 0;
}
