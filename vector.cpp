#include <iostream>
#include <vector> 

int main(int, char**) {
    std::cout << "Vectors\n";

    // Initialize
    std::vector<int> x1;
    std::vector<int> x2 = {10,20,30,40,50};
    std::vector<int> x3{10,20,30,40,50};
    std::vector<std::vector<int>> x4;
    std::vector<std::vector<int>> x5{{1,2},
                                     {4,5,6},
                                     {7,8,9}};

    // Access elements
    std::cout <<    x2[0]          << std::endl;
    std::cout <<    x2.at(0)       << std::endl;
    std::cout <<    x2.front()     << std::endl;
    std::cout <<    x2.back()      << std::endl;
    std::cout <<    *(x2.data())   << std::endl; 
    std::cout <<    "------------" << std::endl;

    // Modifiers 
    x2.push_back(2);                            // Pushes new element to the vector
    x2.push_back(3);
    x2.pop_back();
    x2[0] = 0;
    x2.emplace(x2.end(),5);                     // Extends the container at the specified position
    x2.emplace(x2.begin(),6);                   // Extends the container at the specified position
    x2.emplace_back(7);                         // Extends the container at the end
    x3.assign(5,1);                             // Assigns new value

    // Iterate
    std::cout <<    "Iterator method" << std::endl;

    auto it = x2.begin();
    for (auto it = x2.begin(); it != x2.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    std::cout <<    "Index method" << std::endl;

    for (int i = 0; i < x2.size(); i++)
    {
        std::cout << x2[i] << std::endl;
    }

    std::cout <<    "Iterator method" << std::endl;

    for (auto i = x5.begin(); i < x5.end(); i++)
    {
        for (auto j = i->begin(); j < i->end() ; j++)
        {
            std::cout << *j << " ";
        }
        std::cout << std::endl;
    }

    std::cout <<    "Index method" << std::endl;

    for (int i = 0; i < x5.size(); i++)
    {
        for (int j = 0; j < x5[0].size() ; j++)
        {
            std::cout << x5[i][j] << " " ;
        }
    
        std::cout << std::endl;
    }

}
