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
        void changeName(std::string t_name)
        {
            this->name = t_name;              // The this pointer is used to refere to self property inside a class
        }
        int     price;
        int*    wheels  = NULL;

        Car() : name("NoName"),price(0),wheels(NULL) {}

        Car(std::string t_name, int t_price) : name(t_name),price(t_price),wheels(NULL) {}
        
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
    // ++ Void pointer gets incremented by 1 byte
    // ++ Type pointer gets incremented by the size of the type 

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

    Car     car1;                                                                                   // Class on the stack
                                                                                                    // Uses default constructor
    car1.name       =       "Maruti";
    car1.price      =       1000;
    int wheels      =       4;
    car1.wheels     =       &wheels;

    std::cout       <<  "Name of car is "           << car1.name        << std::endl;
    std::cout       <<  "Price of the car is "      << car1.price       << std::endl; 
    std::cout       <<  "Number of wheels is "      << *(car1.wheels)   << std::endl; 
    
    Car     car2("Suzuki",2000);                                                                    // Uses constructor
    
    car2.wheels    =       &wheels;
    std::cout       <<  "Name of car is "           << car2.name        << std::endl;
    std::cout       <<  "Price of the car is "      << car2.price       << std::endl; 
    std::cout       <<  "Number of wheels is "      << *(car2.wheels)   << std::endl; 

    Car     car3{"Honda",3000};
    car3.wheels     =     &wheels;
    std::cout       <<  "Name of car is "           << car3.name        << std::endl;
    std::cout       <<  "Price of the car is "      << car3.price       << std::endl;  
    std::cout       <<  "Number of wheels is "      << *car3.wheels     << std::endl;
    
    Car*    car4 = new Car{"NoName",4000};                                                          // Class on the heap. Allocate and initialize memory

    car4->name      =       "Ford";                                                                 // Simultaneously dereference the pointer and access the member function
    (*car4).name    =       "Porsche";                                                              // First dereference, then access the function using dot notation
    car4->wheels    =       &wheels;
    std::cout       <<  "Name of car is "           << car4->name       << std::endl;
    std::cout       <<  "Price of the car is "      << car4->price      << std::endl;  
    std::cout       <<  "Number of wheels is "      << *car4->wheels    << std::endl;

    Car     car5    =       *car4;
    Car*    car6    =       &car5;

    void*   car7    =   static_cast<void*>(car4);                                                   // Cast to a void pointer
    Car*    car8    =   static_cast<Car*>(car7);                                                    // Cast to a pointer to a class

    std::cout       <<  "Name of car is "           << car8->name       << std::endl;
    std::cout       <<  "Price of the car is "      << car8->price      << std::endl;  
    std::cout       <<  "Number of wheels is "      << *car8->wheels    << std::endl;

    delete car4;                                                                                    // Don't forget!
    //delete car6;                                                                                  // Crash! Memory was already deleted!
    
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
    
    int* ptr1;                              // Raw pointer. Invalid
    int x = 100;
    void* ptr2;                             // Void pointer. 
    ptr2 = &x;

    int* ptr3 = (int*)(ptr2);               // Casting from void pointer to int pointer 
    int* ptr4 = NULL;                       // Null pointer
    int* ptr5 = nullptr;                    // Null pointer
    int* ptr6 = new int(100);               // 
    delete ptr6;

    int* ptr7 = new int[10];
    delete[] ptr7;

          int v  = 500;
    const int v1 = 100;
    const int v2 = 200;
    const int* ptr8 = &v1;                  // Non-const pointer to a const int
    // v1 = 500;                            // Won't work because v1 is a const
    ptr8 = &v2;                             // Will work because ptr7 is a non-const pointer

    const int* const ptr9 = &v1;            // Const pointer to a const int
    //ptr9 = &v2;                           // Won't work because ptr8 is a const pointer

    const int* volatile ptr10 = &v1;
    std::cout   <<  "ptr10 points to "  <<      *ptr10      << std::endl;
    ptr10 = &v2;
    std::cout   <<  "ptr10 points to "  <<      *ptr10      << std::endl;  

    {
        std::unique_ptr<Car> ptr12      =   std::make_unique<Car>();

        std::cout       <<  "Ptr12 name:    "   <<  ptr12->name  << std::endl;
        std::cout       <<  "Ptr12 price:   "   <<  ptr12->price << std::endl;

        std::unique_ptr<Car> ptr13      =   std::make_unique<Car>("Ferrari",9500);        

        std::cout       <<  "Ptr13 name:    "   <<  ptr13->name  << std::endl;
        std::cout       <<  "Ptr13 price:   "   <<  ptr13->price << std::endl;
        
        std::unique_ptr<Car> ptr14(new Car{"Mercedes",8000});
        
        std::cout       <<   "Ptr14 name   "    <<  ptr14->name         <<      std::endl;       // Smart pointer. Unique pointer does not share its pointer 
        std::cout       <<   "Ptr14 price  "    <<  ptr14->price        <<      std::endl; 
        std::cout       <<   "Address of unerlyling raw pointer: "      <<      ptr14.get()      << std::endl;

        auto ptr15      = std::move(ptr14);

        //std::cout         <<  "Ptr12 name "   << ptr12->name  << std::endl;  // This will now give an error
        std::cout           <<  "Ptr15 name "   << ptr15->name  << std::endl;

        std::shared_ptr<Car> ptr16      =   std::make_shared<Car>();

        std::shared_ptr<Car> ptr17      =   std::make_shared<Car>("Honda",10500);

    } // Smart pointer deletes itself here
    
}
