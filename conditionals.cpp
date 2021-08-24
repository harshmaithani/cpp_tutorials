#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<int> x = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0;i< x.size();i++)         // Index based loop
    {
        std::cout << x[i] << std::endl;
    }

    for (int j : x)
    {
        std::cout << x[j] << std::endl;
    }

    std::vector<std::vector<int>> y{{1,2},
                                    {3,4},
                                    {5,6}};
    for (auto m:y)
    {
        for (auto n:m)
        {
            std::cout << n << " ";
        }
        std::cout << "\n";
    }
}