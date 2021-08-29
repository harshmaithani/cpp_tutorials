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

    for (int j : x)                         // Range based loop since C++11
    {
        std::cout << x[j] << std::endl;
    }

    std::vector<std::vector<int>> vec{{1,2},
                                    {3,4},
                                    {5,6}};

    for (auto i = vec.begin();i < vec.end();i++)
    {
        for (auto j = i->begin(); j < i->end(); j++)
        {
            std::cout << *j << " ";
        }
        std::cout << std::endl;
    }

    enum class Direction 
    {
        up,
        down,
        left,
        right
    };

    Direction direction = Direction::up;

    switch (direction)
    {
        case Direction::up  : std::cout     <<  "Up"    << "\n";
        break;
        case Direction::down : std::cout    <<  "Down"  << "\n";
        break;
        case Direction::left : std::cout    <<  "Left"  << "\n";
        break;
        case Direction::right : std::cout   <<  "Right" << "\n";
        break;
    }
    
}