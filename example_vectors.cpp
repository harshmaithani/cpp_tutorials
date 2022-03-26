#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

class A_Class
{
    public:
        int x;
};

struct A_Struct
{
    public:
        int x;
};

int main(int argc, char* argv[])
{

    // Vector of ints
    std::vector<int>    a   =   {1,2,3,4};                                                              
    std::vector<int>    a1{1,2,3,4};
    std::vector<int>*   a2; 
    a2 = &a;
    a2->push_back(5);
    std::vector<int>*   a3  =   new std::vector<int>;
    a3 = &a;
    std::vector<int>*   a4  =   new std::vector<int>{1,2,3,4};
    std::vector<int>*   a5  {new std::vector<int>{1,2,3,4}};
    std::vector<int>*   a6  {new std::vector<int>(a1)};
    std::cout       <<      " (*a6)[0]          = \t"   <<      (*a6)[0]                <<  std::endl;  //  prints:     1
    std::cout       <<      " (*a6).at(1)       = \t"   <<      (*a6).at(1)             <<  std::endl;  //  prints:     2
    std::cout       <<      " a6->operator[](2) = \t"   <<      a6->operator[](2)       <<  std::endl;  //  prints:     3
    std::cout       <<      " a6->at(3)         = \t"   <<      a6->at(3)               <<  std::endl;  //  prints:     4


    // Vector of pointers to int
    std::vector<int*>   a7;                          
    int     x = 100;
    int*    y = &x; 
    a7.push_back(y);

    std::cout   <<  *(a7.at(0))    << std::endl;


    // Vector of vector of ints
    std::vector<std::vector<int>>   b;                                                                  
    b.push_back(a1);
    std::vector<std::vector<int>>   b2 = {{1,2,3},{4,5,6}};
    std::vector<std::vector<int>>*  b3 = new std::vector<std::vector<int>>;
    std::vector<std::vector<int>>*  b4 {new std::vector<std::vector<int>>(b)};
    std::vector<std::vector<int>>*  b5 {new std::vector<std::vector<int>>{{1,2,3},{4,5,6}}};
    std::vector<std::vector<int>>*  b6 {&b2};

    //std::cout    <<  b2[0]                               <<      std::endl;              //      Won't compile
    std::cout      <<  " b2[1][1]                           =   \t"   <<      b2[1][1]                <<      std::endl;      //   prints:     5
    std::cout      <<  " b2.at(1).at(2)                     =   \t"   <<      b2.at(1).at(2)          <<      std::endl;      //   prints:     6 

    //std::cout    <<  (*b6)[0]                            <<      std::endl;                                                               //   Won't compile
    std::cout      <<  " (*b6)[0][0]                        =   \t"   <<      (*b6)[0][0]                           <<      std::endl;      //   prints:     1
    std::cout      <<  " (*b6).at(0).at(1)                  =   \t"   <<      (*b6).at(0).at(1)                     <<      std::endl;      //   prints:     2
    std::cout      <<  " b6->operator[](0).operator[](3)    =   \t"   <<      b6->operator[](0).operator[](2)       <<      std::endl;      //   prints:     3

    // Vector of chars
    std::vector<char> d;
    std::vector<char> d2 = {'a','l','b','e','r','t'};
    std::vector<char> d3{'a','l','b','e','r','t'};
    std::vector<char>* d4 {new std::vector<char>{'a','l','b','e','r','t'}};

    std::cout       <<  " d2[0]             =   \t"     <<      d2[0]               << std::endl;                       // prints: 
    std::cout       <<  " d2.at(0)          =   \t"     <<      d2.at(0)            << std::endl;                       // prints: 
    std::cout       <<  " (*d4)[0]          =   \t"     <<      (*d4)[0]            << std::endl;                       // prints: 
    std::cout       <<  " (*d4).at(1)       =   \t"     <<      (*d4).at(1)         << std::endl;                       // prints: 
    std::cout       <<  " d4->operator[](2) =   \t"     <<      d4->operator[](2)   << std::endl;                       // prints: 

    std::vector<std::vector<char>>      d5 {{'a','l','b','e','r','t'},{'e','i','n','s','t','e','i','n'}};
    std::vector<std::vector<char>>*     d6 {new std::vector<std::vector<char>>(d5)};
    
    std::cout       <<  " d5[0][0]                          =   \t"     <<      d5[0][0]            << std::endl;       // prints: 
    std::cout       <<  " d5.at(0).at(0)                    =   \t"     <<      d5.at(0).at(0)      << std::endl;       // prints: 
    std::cout       <<  " (*d6)[0][0]                       =   \t"     <<      (*d6)[0][0]         << std::endl;       // prints: 
    //std::cout       <<  (*d6).at(0) << std::endl;   // Won't compile 
    std::cout       <<  " (*d6).at(0).at(0)                 =   \t"     <<      (*d6).at(0).at(0)   << std::endl;       // prints: 
    std::cout       <<  " d6->operator[](0).operator[](0)   =   \t"     <<      d6->operator[](0).operator[](0) << std::endl;   // prints: 
    std::cout       <<  " d6->at(0).at(0)                   =   \t"     <<      d6->at(0).at(0)     << std::endl;       // prints: 

    // Vector of strings
    std::vector<std::string>    c;
    std::vector<std::string>    c2{"albert","einstein","marie","curie","isaac","newton"};
    std::vector<std::string>*   c3  =   &c2; 
    std::vector<std::string>*   c4  =   new std::vector<std::string>;
    std::vector<std::string>*   c5  =   new std::vector<std::string>(c2);
    std::cout       << " (*c5)[0]                           =   \t "    <<      (*c5)[0]                        <<  std::endl;   // prints: albert 
    std::cout       << " (*c5).at(1)                        =   \t "    <<      (*c5).at(1)                     <<  std::endl;   // prints: einstein
    std::cout       << " c5->at(2)                          =   \t "    <<      c5->at(2)                       <<  std::endl;   // prints: marie
    std::cout       << " c5->at(0).at(1)                    =   \t "    <<      c5->at(0).at(1)                 <<  std::endl;   // prints: l
    std::cout       << " c5->operator[](0)                  =   \t "    <<      c5->operator[](0)               <<  std::endl;   // prints: albert
    std::cout       << " c5->operator[](0)->operator[](0)   =   \t "    <<      c5->operator[](0).operator[](0) <<  std::endl;   // prints: a
    
    // Vector of structs
    std::vector<A_Struct>    e; 
    std::vector<A_Struct>    e2{e};
    std::vector<A_Struct>*   e3 = new std::vector<A_Struct>(e);
    std::vector<A_Struct>*   e4 {new std::vector<A_Struct>(e)};


    // Vector of classes
    std::vector<A_Class> f;
    std::vector<A_Class*> f3;
    A_Class f1; 
    A_Class* f2 = &f1;
    f3.push_back(f2);
    std::cout   <<  f3[0]->x    <<  std::endl;
}