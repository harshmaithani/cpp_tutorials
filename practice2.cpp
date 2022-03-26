#include <stdio.h>
#include <iostream>
#include <vector>

/*
int     x = 100;
int*    ptr = &x;
int*    ptr1{&x};
int

array 

int array
char array
string 

vector
vector vector

class 

Template

iteration 


int* ptr1{new int{5}};
int x = 10; 
int* ptr2{&x};

delete ptr1;
delete[] 

static_assert( x == 10);

try: 

catch:

throw: 
*/

class myclass
{
    public:
        int x;
        std::string y;

        myclass(int m, std::string n)   :   x(m),y(n)
        {

        }

    private:
}

class child_class   :   public myclass
{

}


int main(int argc, char* argv[])
{
    int x = 10;
    int* ptr1 = &x;
    int* ptr2 = &x;
    int* ptr3{&x};

    int* ptr4{new int{x}};

    std::vector<int> v1{1,2,3};
    int m = 4;
    v1.push_back(m);

    std::vector<std::vector<int>> v2{{1,2,3},{4,5,6}};
    v2.push_back(v1);

    for (auto it = v1.begin(); it < v1.end(); it ++)
    {
        std::cout << *it << std::endl;
    }
    v2[0][0]

    char array1[] = {'a','l','b','e','r','t'}; // character array
    char array2[] = {"albert"};     // C-style string

     for (int i = 0; i < (sizeof(e)/sizeof(e[0])); i++)
    {
        for (int j = 0; j < (sizeof(e[0])/sizeof(e[0][0])); j++)
        {
            std::cout << " " <<  e[i][j];
        }
        std::cout << std::endl;
    }

    char f[]        =    {'h','a','r','s','h'};
    char g[][5]     =    {{'h','a','r','s','h'},
                         {'m','a','i','t','h'}};

    int prime[5]    =    {2,3,4,5,6};
    passArray(prime);                               // Arrays are pased as pointers and their values can be changed

    std::string array[]{ "peter", "likes", "frozen", "yogurt" };
    for (const auto& element: array) // element is a const reference to the currently iterated array element
    {
        std::cout << element << ' ';    
    }

    std::vector<int> x = {1,2,3,4,5,6,7,8,9,10};

    for (int j : x)                         // Range based loop since C++11
    {
        std::cout << x[j] << std::endl;
    }

    for (auto i = vec.begin();i < vec.end();i++)
    {
        for (auto j = i->begin(); j < i->end(); j++)
        {
            std::cout << *j << " ";
        }
        std::cout << std::endl;
    }

    template <typename T>                       // Function templates
    T add(T x,T y)
    {
        return x + y;
    }

        int age = -1;

    try
    {
        if (age < 0)
        {
            throw age;
        }
    }
    catch(int age)
    {
        std::cout << "Exception caught " << std::endl;
    }
    catch(float age)
    {
        std::cout << "Default exception" << std::endl;
    }

    namespace new_namespace
    {

    }

}

