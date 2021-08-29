#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::cout << "Input/Output" << std::endl;
    std::string name;
    std::cout << "Enter your name" << std::endl;
    
    std::cin >> name;           // This breaks down at whitespace
    getline(std::cin,name);     // This is useful for whitespace

    std::cout << "\n";          // Newline
    std::cout << "\t";          // Tab

}