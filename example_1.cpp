#include <stdio.h>
#include <iostream>
#include <string> 
#include <typeinfo>
#include <vector> 

class A_Class
{
    public: 
    A_Class()
    {
        std::cout << "A_Class object created" << std::endl;
    };
};

class B_Class : public A_Class 
{
    public:
    B_Class()
    {
        std::cout << "B_Class object created" << std::endl; 
    };
};

class C_Class : public B_Class{};
class D_Class : public C_Class{};

int main(int argc, char* argv[])
{
    A_Class* a_ptr {new A_Class}; 
    A_Class* b_ptr {new B_Class}; 
    std::cout << typeid(a_ptr).name() << std::endl; 
    std::cout << typeid(b_ptr).name() << std::endl;
}