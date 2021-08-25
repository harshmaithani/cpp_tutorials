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

                                        // L - values   - value that has an address
                                        // R - values   - an expression that is not an L-value

    int     a       = 5;                // Copy initialization
    int     a1( 5 );                    // Direct initialization
    int     a2{ 5 };                    // Brace initialization. From C++11 onwards    
    int     b[]     = {0,1,2,3};        // Arrays
    int*    b1;                         // Pointer is equivalent to array
            b1      = b;                // int* b1 = &b[0]
    int     c[3]    = {0,1,2};
    double  d       = 6.5;
    float   e       = 6.5f;             // floats need an explicit suffix f else it will be considered double
    char    f       = 'f';
    char    g[]     = {'h','a','r','s','h'};

    const double grav{ 9.8 };           // Preferred use of const before type
    std::cin >> a;
    const int user_constant = a * 10;               // user_constant can only be evaluated at run time
                                                    // But I promise not to change it after initialization
    // constexpr int user_constant_new = a * 10;   // In contrast, constexpr is evaluted at compile time

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

    bool l      = false;                // In bool datatype, everything except 0 is TRUE
    bool m      = 0;                    // This is FALSE
    bool m      = 1;                    // This is TRUE
    bool m1     = 2;                    // This is TRUE

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