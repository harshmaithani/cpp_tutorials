#include <iostream>

int main()
{
    std::cout << "std::string" << std::endl;

    // Initialize
    std::string str = "My name is Harsh Maithani";

    //getline(std::cin,str);

    str.push_back('z');
    std::cout << str << std::endl;
    
    str.pop_back();
    std::cout << str << std::endl;

    str.resize(15);
    std::cout << str << std::endl;

    std::cout << "Capacity is " << str.capacity() << std::endl;
    std::cout << "Length is " << str.length() << std::endl;

    str.shrink_to_fit();
    std::cout << "Capacity is " << str.capacity() << std::endl;
    
    std::string::iterator it;

    for (it = str.begin(); it != str.end(); it++ )
    {
        std::cout << *it;
    }

    std::cout << std::endl;

    // 
}