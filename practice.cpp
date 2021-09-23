#include <stdio.h>
#include <vector>
#include <iostream>

int main(int argc, char* argv[])
{
    float a = 10.0f;
    float* x = &a;
    float* x1 = nullptr;
    float* x2 {nullptr};

    float m[2]{0 , 1.0f};
    std::vector<float> n {0,1.0f};

    char b = 'h';
    char c[]= {"harsh"};
    std::cout << c << std::endl;
    char* d = "harsh";
}