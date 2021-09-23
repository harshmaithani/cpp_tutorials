#include <stdio.h>          // C header file, for printf
#include <iostream>         // C++ header file for input / output 
#include <vector>           // For vectors
#include <string>           // To use std::string 
#include <thread>           // To use threads
#include <fstream>          // To read and write from files
#include <sstream>          // To use an input string stream object 
#include <unordered_map>    // To use maps
#include <cassert>          // Assert, for user testing

void passArray(int prime[5])                    // prime is the actual array
{   
    prime[0] = 9;                               // changing it here will change the original argument
    // void passArray(const int prime[5])       // pass array as const to allow read but not modify
}



int main(int argc, char** argv)
{
    int a[5];                                 // Array declaration by specifying size
    int b[]         =       {1,2,3,4,5};      // Array declaration by initializing elements
    int c[5]        =       {};               // 
    int d[5]        =       {1,2,3,4,5};      // Array declaration by specifying size and initializing elements
    int e[2][2]     =       {{1,2},
                            {3,4}};

    std::cout <<  "a[0] = "     <<      a[0]    << std::endl;
    std::cout <<  "b[0] = "     <<      b[0]    << std::endl;
    std::cout <<  "b[-1] = "    <<      b[-1]   << std::endl;   // No index out-of-bound checking
    std::cout <<  "b[6] = "     <<      b[6]    << std::endl;   // No index out-of-bound checking
    std::cout <<  "c[0] = "     <<      c[0]    << std::endl;
    std::cout <<  "d[0] = "     <<      d[0]    << std::endl;
    std::cout <<  "address of d  = "     <<      d       << std::endl;
    std::cout <<  "value of d   =  "     <<     *d      << std::endl;  // *d = d[0]
    std::cout <<  "e[0][0] = "  <<   e[0][0]    << std::endl;

    std::cout << "Size of e is "    <<  sizeof(e)       <<  std::endl;
    std::cout << "Size of e[0] is " <<  sizeof(e[0])    <<  std::endl;

    for (int i = 0; i < (sizeof(e)/sizeof(e[0])); i++)
    {
        for (int j = 0; j < (sizeof(e[0])/sizeof(e[0][0])); j++)
        {
            std::cout << " " <<  e[i][j];
        }
        std::cout << std::endl;
    }

    char f[]        =    {'h','a','r','s','h'};
    char g[][5]     =    {{'h','a','r','s','h'},
                         {'m','a','i','t','h'}};

    int prime[5]    =    {2,3,4,5,6};
    passArray(prime);                               // Arrays are pased as pointers and their values can be changed

    std::string array[]{ "peter", "likes", "frozen", "yogurt" };
    for (const auto& element: array) // element is a const reference to the currently iterated array element
    {
        std::cout << element << ' ';    
    }

}