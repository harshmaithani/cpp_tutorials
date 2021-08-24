#include <stdio.h>
#include <iostream>     // For input / output 
#include <vector>       // For vectors
#include <string>       // For strings

int main(int argc,char** argv)
{
    std::cout << "Casting" << std::endl;

    int a       = 100;
    double b    = 101.12;
    float c     = 101.12f;

    double d    =   a;          // Implicit casting
    double e    = (double) a;   // Explicit C casting
    double f    = double (a);   // Explicit C++ casting

    double h    = static_cast<int>(a);
}
