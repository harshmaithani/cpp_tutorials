#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

int     a = 100;
int*    b = &a;
int     c[1] = {1};
int     d = 200;

class Book
{
public:
    int price;
};

void function1(void)
{std::cout << "No inputs and no outputs" << std::endl;}

void function2(int x)
{std::cout << "Passing argument by value" << std::endl;}

void function3(int& x)
{std::cout << "Passing argument by reference " << std::endl;}

void function4(int* x)
{std::cout << "Passing pointer as argument " << std::endl; }

void function5(int* x)
{std::cout << "Passing array as argument" << std::endl;}

void function6(const int& x)
{std::cout << "Passing argument by reference but prohibit from modifying" << std::endl;}

void function7(std::vector<int> x)
{std::cout << "Passing vector as argument by value" << std::endl;}

void function8(std::vector<int>& x)
{std::cout << "Passing vector as argument by reference" << std::endl;}

void function9(void)
{
std::cout << "To demonstrate possible returns in a void function"   << std::endl;
return;     // Ok
// return function1();      // Okay to return a void function.
// return 5;                // Not okay. Will show error.
}

void function20(void)
{std::cout << "No return" << std::endl;}

int function21(void)
{
    std::cout << "Return by value" << std::endl;
    return a;
}

int* function22(void)
{
    std::cout << "Return address(pointer)" << std::endl;
    return b;
}

int* function23(void)
{
    std::cout << "Return array" << std::endl;
    return c;
}

int& function24(void)
{
    std::cout << "Return by reference" << std::endl;
    return a;
}

Book function25(void)
{
    Book book;
    std::cout << "Return class" << std::endl;
    return book;
}

int function26(void)
{
    std::cout << "To demonstrate function pointers" << std::endl;
    return d;
}

int function27(int x)
{
    std::cout << "To demonstrate function overloading"  << std::endl;
}

int function28(float x)
{
    std::cout << "To demonstrate function overloading"  << std::endl;
}

int main(int argc, char** argv)
{
    std::cout << "Functions" << std::endl;

    int     m = 10;
    int*    n = &m;
    int     p;
    int*    q;
    int     r[1] = {1};
    int     s[1];
    Book    book;
    

    std::vector<int> v;

    function1();        // No inputs

    function2(m);       // Passing arguments by value

    function3(m);       // Passing arguments by reference

    function4(&m);      // Passing pointer as argument

    function5(r);       // Passing array as argument

    function6(m);       // Passing argument by reference but prohibit from modifying

    function7(v);       // Passing vector as argument by value

    function8(v);       // Passing vector as argument by reference

    function20();       // No return

    p   = function21(); // Return by value

    q   = function22(); // Return address (pointer)

    q   = function23(); // Return array

    p   = function24(); // Return by reference

    int (*functionPointer1)(){function21};              // Function pointer i.e pointer to function21
    std::cout << (*functionPointer1)() << std::endl;;   // Function pointer calls function21
    functionPointer1 = function26;                      // Function pointer now points to function26
    std::cout << (*functionPointer1)() << std::endl;;   // Function pointer calls function26

    std::cout << "Value of function21() is -    "   << function21() << std::endl;
    std::cout << "Address of function21() is -  "   << function21   << std::endl;

    return 0;       // Okay. But not needed.
}