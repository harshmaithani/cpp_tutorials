#include <stdio.h>
#include <iostream>

class A
{
    public: 

    
    int fun(int x)
        {
            std::cout   << "A::fun()"   << std::endl;
        }
    
    
};

class B     :   public A
{

    public: 
    
    int fun(int x)
        {
            std::cout   << "B::fun()"   << std::endl;
        }
    
    
};

int main()
{
    int m = 100;
    double n = 100.0f;

    A a;
    //a.fun(m);

    B b;
    //b.fun(n);

    //A* c{new B};
    //c->fun(m);

    A& d{b};
    d.fun(m);

    A e{b};
    e.fun(m);
}