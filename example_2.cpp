#include <stdio.h>
#include <iostream>
#include <string>
#include <vector> 

int main(int argc, char* argv[])
{
    // Examples:    Characters

    char names_char1[8] = {'e','i','n','s','t','e','i','n'};    // Example1

    std::cout << names_char1 << std::endl;                      // prints: einstein

    for (int i = 0; i < sizeof(names_char1)/sizeof(names_char1[0]); i++)
    {
        std::cout << names_char1[i] << '\t';                    // prints: e    i   n   s   t   e   i   n
    }
    std::cout << std::endl; 

    char names_char2[2][2] = {'a','b','c','d'};                 //  Example 2

    std::cout << names_char2     << std::endl;                  //  prints: address
    //std::cout << names_char2[0] << std::endl;                 //  prints: abcdeinstein

    for (int i = 0; i < sizeof(names_char2)/sizeof(names_char2[0]); i++)
    {
        for (int j = 0; j < sizeof(names_char2[0])/sizeof(names_char2[0][0]) ; j++)
        {
            std::cout   <<  names_char2[i][j]   << '\t';        // prints: a     b   c   d
        }
    }
    std::cout << std::endl; 

    char names_char3[2][2] = {{'e','f'},{'g','h'}};             //  Example 3

    std::cout << names_char3 << std::endl;                      //  prints:  address
    //std::cout << names_char3[0] << std::endl;                 //  prints:  garbage
    
    for (int i = 0; i < sizeof(names_char3)/sizeof(names_char3[0]); i++)
    {
        for (int j = 0; j < sizeof(names_char3[0])/sizeof(names_char3[0][0]) ; j++)
        {
            std::cout   <<  names_char3[i][j];                  //  prints:  efgh
        }
    }
    std::cout   <<  std::endl; 

    // Example: Strings 

    std::string names_string1 = "albert einstein";                   // Example 1
    std::cout << names_string1 << std::endl;                         // prints: albert einstein
    
    for (int i = 0; i < names_string1.size(); i++)
    {
        std::cout << names_string1[i];                               // prints: albert einstein
    }
    std::cout   <<  std::endl; 

    std::string names_string2 = "marie curie";                       // Example 2
    for (auto i = names_string2.begin(); i < names_string2.end(); i++)
    {
        std::cout << *i;                                            // prints: marie curie
    }
    std::cout   <<  std::endl;

    std::string names_string3 = "isaac newton";                      //  Example 3
    std::string* names_string4 = &names_string3;
    std::cout   <<  *names_string4           <<  std::endl;          //  prints: isaac newton
    std::cout   <<  names_string4[0]         <<  std::endl;          //  prints: isaac newton
    std::cout   <<  (*names_string4)[1]      <<  std::endl;          //  prints: s
    std::cout   <<  names_string4->at(2)     <<  std::endl;          //  prints: a

    std::string names_string5[] = {"max planck","c v raman","galileo"};  // Example 4 - Array of strings 
    std::string* names_string6 {names_string5};
    std::cout   <<  names_string5[0]         <<  std::endl;           //  prints: max planck
    std::cout   <<  *(names_string6 + 1)     <<  std::endl;           //  prints: c v raman

    for (int i = 0; i < sizeof(names_string5)/sizeof(names_string5[0]); i++)
    {
        std::cout   <<  names_string5[i]    << " ";                   //  prints: max planck c v raman galileo 
    }
    std::cout       <<  std::endl;

    for (int i = 0; i < sizeof(names_string5)/sizeof(names_string5[0]); i++)
    {
        for (int j = 0; j < names_string5[i].size() ; j++)
        {
            std::cout   <<  names_string5[i][j];                      //  prints: max planck c v raman galileo 
        }
        std::cout << " ";
    }
    std::cout       <<  std::endl;

    std::vector<std::string> names = {"harsh","maithani"};            // Example 5 - Vector of strings 

    for (auto it = names.begin(); it < names.end(); it++)
    {
        std::cout << *it << " " << it[0] << std::endl;
        
        for (auto counter = it->begin(); counter < it->end(); counter ++)
        {
            std::cout << *counter << " " << counter[0] << std::endl;
        }
        
    }

    // Example: Vectors 



    std::string names_string_array[2]       =   {"harsh","maithani"};
    std::cout   <<  names_string_array[0]       << std::endl;       // harsh
    std::cout   <<  names_string_array[0][0]    << std::endl;       // h

    std::vector<std::string> names_vector   =   {"varun","maithani"};   
    std::cout   <<    names_vector[0]               << std::endl;       // varun
    std::cout   <<    names_vector[0][0]            << std::endl;       // v
    std::cout   <<    names_vector.at(1)            << std::endl;       // maithani
    std::cout   <<    names_vector.at(1).at(1)      << std::endl;       // a

    std::vector<std::vector<std::string>> names_vector_vector   =   {{"arun","maithani"},
                                                                    {"alpana","maithani"}};

    std::cout <<    names_vector_vector[1][0] << std::endl;     // alpana
    auto it = names_vector_vector.begin();
    std::cout << (*it)[0]       << std::endl;                   // arun
    std::cout << (*it)[0][0]    << std::endl;                   // a 

}