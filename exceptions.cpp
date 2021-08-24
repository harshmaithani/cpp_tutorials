#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

int main(int argc, char* argv[])
{
    std::cout << "Exception handling in C++" << std::endl;

    int age = -1;

    try
    {
        if (age < 0)
        {
            throw age;
        }
    }
    catch(int age)
    {
        std::cout << "Exception caught " << std::endl;
    }
    catch(float age)
    {
        std::cout << "Default exception" << std::endl;
    }
    
}