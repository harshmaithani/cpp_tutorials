#include <stdio.h>
#include <iostream>     // For input / output 
#include <vector>       // For vectors
#include <string>       // For strings

// Notes

// Null pointers --> any
// any --> void pointers

// const_cast<int>    override const or volatile
// dynamic_cast<int>  runtime cast on polymorphic types. A* pointer --> B* pointer 
// reinterpret_cast<int>    
// static_cast<int>   nonpolymorphic cast.

const float constx = 9.815234f;

class Class1
{
    double  i,j;
};

class Class2
{
    int     x,y;
    public:
        Class2(int a,int b)
        {
            x = a;
            y = b;
        }
        int result()
        {
            return x + y;
        }
};

int main(int argc,char** argv)
{
    std::cout << "Casting" << std::endl;

    int         a   =   100;
    double      b   =   101.12;
    float       c   =   101.12f;      // float needs f
    
    std::cout   <<  "a = "  <<  a   <<  std::endl;
    std::cout   <<  "b = "  <<  b   <<  std::endl;
    std::cout   <<  "c = "  <<  c   <<  std::endl;

                                // Standard conversion

    c = a;                      // Promotion

    std::cout   <<  "c = "  <<  c   << std::endl; 

    double d    =   a;          // Implicit casting
    double e    = (double) a;   // Explicit C casting
    double f    = double (a);   // Explicit C++ casting

    double h    = static_cast<int>(a);

    int*    i      =       & a;
    std::cout   << "Address of i = "    <<  i  << " value of i = "  <<  *i  << std::endl;
    double* j      =       & b;
    std::cout   << "Address of j = "    <<  j  << " value of j = "  <<  *j  << std::endl;
    i              =  (int*)(j);    // Improper casting, but no compiler error 
    std::cout   << "Address of i = "    <<  i  << " value of i = "  <<  *i  << std::endl;

    Class1  class1;
    Class2* class2;

    class2 = (Class2*)(&class1);

    std::cout  << "Address of Class2 = "    << class2 << " " << class2->result() << std::endl; 

    std::cout   <<  "Constant value is = "  << constx << std::endl;

    float constx2 = const_cast<float &>(constx);

    std::cout   << "New constant is " << constx2 << std::endl;

    constx2 = constx2 + 1;

    std::cout   << "New constant is " << constx2 << std::endl;

}
