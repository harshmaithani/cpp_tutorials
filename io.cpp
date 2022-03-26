#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

#include <fstream>
#include <iostream>
#include <string>

#include <iomanip>

int main()
{
    std::cout << "Input/Output" << std::endl;
    std::string name;
    std::cout << "Enter your name" << std::endl;

    std::cin >> name;           // This breaks down at whitespace
    getline(std::cin,name);     // This is useful for new lines

    char name2;
    std::cin.get(name2);        // This is useful for whitespsace

    char name3[10];
    std::cin.get(name3,10);     // This is useful for maximum number of characters to read
    
    std::cout << "\n";          // Newline
    std::cout << "\t";          // Tab

    std::ifstream file{"sample.txt"};
    if (!file)
    {
        std::cerr   <<  "Unable to read file"  << std::endl;
        return 1;
    }

    while (file)
    {
        std::string strInput;
        std::getline(file,strInput);
        std::cout   <<  strInput    <<  std::endl;
    }



}