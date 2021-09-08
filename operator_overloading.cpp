#include <stdio.h>          // C header file, for printf
#include <iostream>         // C++ header file for input / output 
#include <vector>           // For vectors
#include <string>           // To use std::string 

class ComplexNumbers
{
    public: 
    int real;
    int imaginary;
    ComplexNumbers();

    ComplexNumbers(int r,int img) : real(r),imaginary(img) {}

    ComplexNumbers operator + (ComplexNumbers const &obj)
    {
        ComplexNumbers res(0,0);
        res.real        = real + obj.real;
        res.imaginary   = imaginary + obj.imaginary;
        return res;
    }
};

int main(int argc, char** argv)
{
    ComplexNumbers c1(1,1);
    ComplexNumbers c2(2,2);
    ComplexNumbers c3 = c1 + c2;    
    std::cout << c3.real << " " << c3.imaginary << std::endl;
}