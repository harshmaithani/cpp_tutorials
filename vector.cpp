#include <iostream>
#include <vector> 

class MyClass
{
    public:
        std::string name;
        int         id;
};

int main(int, char**) {
    std::cout << "Vectors\n";

    // Initialize
    std::vector<int> x1;
    std::vector<int> x2 = {10,20,30,40,50};
    std::vector<int> x3{10,20,30,40,50};
    std::vector<std::vector<int>> x4;
    std::vector<std::vector<int>> x5{{1,2},
                                     {4,5,6},
                                     {7,8,9}};

    // Access elements
    std::cout <<    x2[0]          << std::endl;
    std::cout <<    x2.at(0)       << std::endl;
    std::cout <<    x2.front()     << std::endl;
    std::cout <<    x2.back()      << std::endl;
    std::cout <<    *(x2.data())   << std::endl; 
    std::cout <<    "------------" << std::endl;

    // Modifiers 
    x2.push_back(2);                            // Pushes new element to the vector
    x2.push_back(3);
    x2.pop_back();
    x2[0] = 0;
    x2.emplace(x2.end(),5);                     // Extends the container at the specified position
    x2.emplace(x2.begin(),6);                   // Extends the container at the specified position
    x2.emplace_back(7);                         // Extends the container at the end
    x3.assign(5,1);                             // Assigns new value

    // Iterate
    std::cout <<    "Iterator method" << std::endl;

    auto it = x2.begin();
    for (auto it = x2.begin(); it != x2.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    std::cout <<    "Index method" << std::endl;

    for (int i = 0; i < x2.size(); i++)
    {
        std::cout << x2[i] << std::endl;
    }

    std::cout <<    "Iterator method" << std::endl;

    for (auto i = x5.begin(); i < x5.end(); i++)
    {
        for (auto j = i->begin(); j < i->end() ; j++)
        {
            std::cout << *j << " ";
        }
        std::cout << std::endl;
    }

    std::cout <<    "Index method" << std::endl;

    for (int i = 0; i < x5.size(); i++)
    {
        for (int j = 0; j < x5[0].size() ; j++)
        {
            std::cout << x5[i][j] << " " ;
        }
    
        std::cout << std::endl;
    }

    // std::vector<int>

    // Vector of vector of int

    std::vector<std::vector<int>> intVectorVector;
    std::vector<int> intVector;
    int v = 100;
    intVector.push_back(v);
    intVectorVector.push_back(intVector);

    // Vector of vector of pointers to int

    std::vector<std::vector<int *>> intPointerVectorVector;
    std::vector<int *> intPointerVector;
    int* v2 = new int(100);
    int* v3{new int(100)};

    intPointerVector.push_back(v2);
    intPointerVector.push_back(v3);

    intPointerVectorVector.push_back(intPointerVector);
    
    for (auto i = intPointerVectorVector.begin(); i < intPointerVectorVector.end(); i++)
    {
        for (auto j = i->begin(); j < i->end(); j++)
        {
            std::cout << *(*j) << std::endl;
        }
    }

    // Vector of vector of strings

    std::vector<std::vector<std::string>> stringVectorVector;
    std::vector<std::string> stringVector1;
    std::vector<std::string> stringVector2;
    std::string string1 = "harsh";
    std::string string2 = "maithani";
    stringVector1.push_back(string1);
    stringVector1.push_back(string2);

    std::string string3 = "alpana";
    std::string string4 = "maithani";
    stringVector2.push_back(string3);
    stringVector2.push_back(string4);

    stringVectorVector.push_back(stringVector1);
    stringVectorVector.push_back(stringVector2);

    for (auto i = stringVectorVector.begin(); i < stringVectorVector.end(); i++)
    {
        for (auto j = i->begin(); j < i->end(); j++)
        {
            std::cout << (*j) << " ";
        }
        std::cout << std::endl;
    }

    // Vector of classes

    std::vector<MyClass> classVector;
    MyClass MyClassObject1;

    classVector.push_back(MyClassObject1);
    classVector[0].name             =       "harsh";
    classVector[0].id               =       100;

    for (auto i = classVector.begin(); i < classVector.end(); i++)
    {
        std::cout   <<      i->name     <<      std::endl;
        std::cout   <<      (*i).id     <<      std::endl;
    }

    // Vector of pointers to classes

    std::vector<MyClass *> classPointerVector;
    classPointerVector.push_back(new MyClass);
    classPointerVector[0]->name     =       "harsh";
    classPointerVector[0]->id       =       100;

    for (auto i = classPointerVector.begin(); i < classPointerVector.end(); i++)
    {
        std::cout   <<      (*i)->name      <<      std::endl;
        std::cout   <<      (*i)->id        <<      std::endl; 
    }

    // Vector of vector of pointers

    // Vector of vector of functors

    // Vector of vector of templates

}
