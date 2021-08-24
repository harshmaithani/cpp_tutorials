#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

class Books
{
private:
public:
    Books();
    ~Books();
    int price;
};

Books::Books(/* args */)
{std::cout << "Object constructed" << std::endl;}

Books::~Books()
{std::cout << "Object destructed" << std::endl;}


template <typename T>
T add(T x,T y)
{
        return x + y;
}

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

    auto        ab  = 9.8f;     // New formats
    wchar_t     ac;
    char16_t    ad;
    std::size_t ae;

    float   ba = (float) a;     // C like cast
    float   bb = float (a);     // C++ like cast

    std::cout << a << std::endl;        // Prints a
    std::cout << b << std::endl;        // Prints address of b
    std::cout << c << std::endl;        // Prints address of c
    std::cout << d << std::endl;        // Prints d
    std::cout << e << std::endl;        // Prints e
    std::cout << f << std::endl;        // Prints 'f'
    std::cout << g << std::endl;        // Prints 'harsh'

    int     h   = 10;
    int*    i;
    i           = &h;
    int*    j   = &h;
    int**   k   = &j;

    bool l      = true;
    bool m      = false;

    std::string              n = "harsh";
    std::vector<std::string> p = {"harsh","maithani"};

    std::cout <<    g           << std::endl;   // Prints 'harsh'
    std::cout <<    g[0]        << std::endl;   // Prints 'h'
    std::cout <<    n           << std::endl;   // Prints 'harsh'
    std::cout <<    n[0]        << std::endl;   // Prints 'h'
    std::cout <<    p[0]        << std::endl;   // Prints 'harsh'
    std::cout <<    p[1][1]     << std::endl;   // Prints 'a'

    int                         q[][3]    =     {{1,2,3},
                                                {4,5,6},
                                                {7,8,9}};

    std::vector<std::vector<int>> r = { {1,2,3},
                                        {4,5,6},
                                        {7,8,9} };

    Books   book1;                                  // Use of classes
    Books*  book2;
    std::cout << book1.price    << std::endl;
    std::cout << book2->price   <<std::endl;

    std::cout << add<int>(3,5)  << std::endl;       // Use of templates

    enum Color                                      // New user type 
    {
        color_black = 100,                          
        color_red  = 200,                           
        color_blue = 300,                           
    };

    Color paint = color_red;
    std::cout << paint << std::endl;                // Prints 100


}