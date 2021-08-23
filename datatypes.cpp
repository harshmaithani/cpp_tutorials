#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::cout << "Datatypes" << std::endl;

    int     a       = 5;
    int     b[]     = {0,1,2,3};
    int     c[3]    = {0,1,2};
    double  d       = 6.5;
    float   e       = 6.5f;
    char    f       = 'f';
    char    g[]     = {'h','a','r','s','h'};
    
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;
    std::cout << f << std::endl;
    std::cout << g << std::endl;

    int     h   = 10;
    int*    i;
    i           = &h;
    int*    j   = &h;
    int**   k   = &j;

    bool l      = true;
    bool m      = false;

    std::string              n = "harsh";
    std::vector<std::string> p = {"harsh","maithani"};

    std::cout <<    g           << std::endl;
    std::cout <<    g[0]        << std::endl;
    std::cout <<    n           << std::endl;
    std::cout <<    n[0]        << std::endl;
    std::cout <<    p[0]        << std::endl;
    std::cout <<    p[1][1]     << std::endl;

    int                         q[][3]    =     {{1,2,3},
                                                {4,5,6},
                                                {7,8,9}};

    std::vector<std::vector<int>> r = { {1,2,3},
                                        {4,5,6},
                                        {7,8,9} };

}