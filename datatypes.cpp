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


template <typename T>                       // Function templates
T add(T x,T y)
{
        return x + y;
}



int main()
{
    std::cout << "Datatypes" << std::endl;

                                            //  L - values   - value that has an address
                                            //  R - values   - an expression that is not an L-value

    typedef double distance;                //  Typedef
    using length        =       double;     //  Alias
    auto    ab          =       9.8f;       //  Automatic inference

    int     a           =       5;          //  Copy initialization
    int     a1( 5 );                        //  Direct initialization
    int     a2{ 5 };                        //  Brace initialization. From C++11 onwards     
    int     b[]         =       {0,1,2,3};  //  Arrays
    int*    b1;                             //  Pointer is equivalent to array
            b1          =       b;          //  int* b1 = &b[0]
    int&    b2          =       a;          //  Reference
    int     b3          =     ++a;          //  Prefix increment.   Value is altered before it is used.
    int     b4          =     a++;          //  Postfix increment.  Value is used then altered.
    int     c[3]        =       {0,1,2};
    double  d           =       6.5;
    double  d2{ 0.1 };
    float   e           =       6.5f;       // floats need an explicit suffix f else it will be considered double
    float   e2{ 0.1f };
    char    f           =       'f';        // Character datatype
    char    g[]         =   {'h','a','r','s','h'};    // Character array end with '\0', null character
    int     a3{ 010 };                      // 0 before the number means Octal 
    int     a4{ 0xF };                      // 0x before the number means hexadecimal

    std::cout   <<  a                   << std::endl;   // 
    std::cout   <<  std::oct    << a3   << std::endl;   // Print octal
    std::cout   <<  std::hex    << a4   << std::endl;   // Print hexadecimal
    std::cout   <<  std::dec    << a    << std::endl;   // Return to decimal


    const double grav{ 9.8 };               // Preferred use of const before type
    std::cin >> a;                          // This breaks down at whitespace
    const int user_constant = a * 10;               // user_constant can only be evaluated at run time
                                                    // But I promise not to change it after initialization
    // constexpr int user_constant_new = a * 10;   // In contrast, constexpr is evaluted at compile time


    wchar_t     ac;             // New datatypes end with a _t
    char16_t    ad;
    std::size_t ae;             // Data type to represent the size or length of objects

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
    bool m1     = 1;                    // This is TRUE
    bool m2     = 2;                    // This is TRUE

    std::string              n = "harsh";   // String
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

    enum Color                                      // New user type called enumeration called Color
    {
        color_black = 100,                          // default 0                   
        color_red  = 200,                           // default 1
        color_blue = 300,                           // default 2           
    };

    Color paint = color_red;
    std::cout << paint << std::endl;                // Prints 100

    enum class ColorClass                           // Enum class defines this as a scoped enumeration instead of a standard enumeration
    {
        red,                                        // red is inside the scope of ColorClass
        blue                                        // This is advisable over unscoped enumeration
    };

    ColorClass new_paint = ColorClass::blue;        // 

    // Scope
    // Internal Linkage i.e visible only in this file 
    // External Linkage i.e visible in this file and outside

    int                 z1  =   100;    // Global variable with static duration and global namespace scope               
                                        // (visible from the start to the end of the file).
                                        // Global variables have static duration.
    {                                   // Local variables are alive inside the block from the starting
    int                 z2  =   200;    // to the end of the block. This is called automatic duration.
    }

    int                 z3  =   300;    // Default visible for life of program and inside and outside this .cpp
    static int          z4  =   400;    // Made visible for life of program and only in this .cpp i.e internal linkage
    const int           z5  =   500;    // Visible for life of program but only in this .cpp i.e internal linkage
    // External global variables must be forward declared in the file they are going to be used and need the word extern
    extern const int    z6;             // Made visible for life of program and outside this .cpp


}