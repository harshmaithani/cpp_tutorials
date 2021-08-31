#include <stdio.h>          // C header file, for printf
#include <iostream>         // C++ header file for input / output 
#include <vector>           // For vectors
#include <string>           // To use std::string 
#include <thread>           // To use threads
#include <fstream>          // To read and write from files
#include <sstream>          // To use an input string stream object 
#include <unordered_map>    // To use maps
#include <cassert>          // Assert, for user testing

class Car
{
    public:
        std::string name;
        void changeName(std::string name)
        {
            this->name = name;              // The this pointer is used to refere to self property inside a class
        }
        
};

int Add(int x,int y)
{
    return x + y;
    std::cout << "Function Add() is called" << std::endl;
}

int Subtract(int x, int y)
{
    return x - y;
    std::cout << "Function Subtract() is called" << std::endl;
}

int callFunction(int x, int y, int (*function)(int,int))
{
    return function(x,y);
}

int main()
{
    int     a           =       100;        // variable of datatype int
    int*    b           =       &a;         // pointer to an int variable
    int*    c{&a};
    int*    d           =       0;          // Null pointer
    int*    d2          =       nullptr;    // Null pointer
    int*    e           =       NULL;       // Null pointer
    int**   f           =       &b;         // pointer to a pointer to an int
    int**   g           =       &d;

    int     j[5]        =       {1,2,3,4,5};
    int     k[2][2]     =       {{1,2},
                                {3,4}};

    int*    l;

            l           =       j;          // Pointer and array are the same thing;   l = &j[0]

    std::cout       <<  j[0]    <<  " " << j[1] << " " << j[2] <<  std::endl;
    std::cout       <<  l[0]    <<  " " << l[1] << " " << l[2] <<  std::endl;
    
    for (int i = 0; i < sizeof(j) / sizeof(j[0]); i ++)
    {
        std::cout <<    "Pointer address: "     <<      l    <<     "has value: "    <<     *l   << std::endl;
        l++;
    }

    int*    m;
            m           =       &k[0][0];  

    for ( int i = 0 ; i < ( sizeof (k) / sizeof(k[0]) ); i++ )
    {
        for ( int j = 0; j < ( sizeof k[0] / sizeof(k[0][0]) ) ; j++ ) 
        {
            std::cout   <<  *(*(k + i) + j) << "  ";
        }
        std::cout   <<  std::endl;
    }

    Car     cp1;                            // Class
    cp1.name = "Maruti";

    Car*    cp2;                            // Class
    
    //cp2->name = "Maruti";                 // Simultaneously dereference the pointer and access the member function
    //(*cp2).name = "Suzuki";               // First dereference, then access the function using dot notation

    int*    h{new int};                     // dynamically allocate on the heap and assign the address so we can access later
            *h          =       4;          // assign the value of 4 to allocated memory
    delete h;                               // return the memory pointed 

    int (*p)(int,int);                      // Declaration of Function pointer. Should have same parameters as target functions
    p = Add;                                // p points to Add() function
    std::cout << p(5,3) << std::endl;       // Implicit dereference
    p = Subtract;                           // p points to Subtract() function
    std::cout << p(5,3) << std::endl;      

    int (*q)(int,int){&Add};                // Initialize q function pointer with Add()
    std::cout << (*q)(5,3)  << std::endl;   // Explicit dereference

    std::cout << callFunction(5,3,Add)          << std::endl;   // Passing functions as arguments to other functions
    std::cout << callFunction(5,3,Subtract)     << std::endl;   // Passing functions as arguments to other functions
    
}
