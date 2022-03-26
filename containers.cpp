#include <iostream>
#include <stdio.h>
#include <set>              // For sets
#include <vector>           // For vectors
#include <list>             // For lists
#include <map>              // For maps
#include <string>           // For strings
#include <algorithm>        // For std::

int main()
{
    // Vectors
    std::vector<int> vector_ints;

    vector_ints.push_back(7);
    vector_ints.push_back(2);
    vector_ints.push_back(-5);
    vector_ints.push_back(3);

    for (auto it = vector_ints.begin(); it < vector_ints.end(); it++)
    {
        std::cout   <<  "Element = " << *it    << std::endl;  
    }

    // Lists
    std::list<int> list_ints;
    list_ints.push_back(7);
    list_ints.push_back(2);
    list_ints.push_back(-5);
    list_ints.push_back(3);

    // Won't work 
    //for (auto it = list_ints.begin(); it < list_ints.end(); it++)
    //{
    //    std::cout << *it << std::endl;
    //}

    std::list<int>::const_iterator it2;
    it2 = list_ints.cbegin();
    while (it2 != list_ints.cend())
    {
        std::cout << " Element = " << *it2 << std::endl;
        ++it2;
    }

    // Sets
    std::set<int> set_ints;

    set_ints.insert(7);
    set_ints.insert(2);
    set_ints.insert(-5);
    set_ints.insert(3);
    set_ints.insert(-4);

    //for (auto jit = set_ints.cbegin(); jit < set_ints.cend(); jit++)
    //{
    //    std::cout   <<  *jit     << std::endl;
    // }

    std::list<int>::const_iterator it3;
    it3 = list_ints.cbegin();
    while (it3 != list_ints.cend())
    {
        std::cout << "Element = " << *it3 << std::endl;
        ++it3;
    }
   
    // Maps
    std::map<int, std::string> mymap;
    mymap.insert(std::make_pair(4,"apple"));
    mymap.insert(std::make_pair(2,"banana"));
    mymap.insert(std::make_pair(1,"orange"));

    auto it4 = mymap.cbegin();
    while(it4 != mymap.cend())
    {
        std::cout << it4->first << " " << it4->second << std::endl;
        it4++;
    }

    std::vector<int>::iterator result = std::min_element(vector_ints.begin(),vector_ints.end());
    std::cout << "min element is " << *result << std::endl;

    for (int i: vector_ints)
    {
        std::cout << i << std::endl;
    }

}