#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::cout   << "Algorithms" << std::endl;

    std::vector<int> vector1{1,2,3,4,5};
    std::vector<int> vector2{1,1,2,2,3};

    int value       = 3;
    int min_number  = 2;
    int max_number  = 5;

    // Adjacent find
    auto it = std::adjacent_find(vector2.begin(),vector2.end());

    if (it!= vector2.end())
        std::cout   <<  "Adjacent find in vector2 = "    <<      *it     <<      std::endl;

    // All of 
    if ( std::all_of( vector1.begin() , vector1.end() , [](int i){return i>0;} ) )
        std::cout   <<  "All of vector1 is > 0"          <<  std::endl;

    // Any of
    if ( std::any_of( vector1.begin() , vector1.end() , [](int i){return i>0;} ) )
        std::cout   <<  "Any of vector1 is > 0"          <<  std::endl;

    // Binary search
    if ( std::binary_search( vector1.begin() , vector1.end() , value ) )
        std::cout   <<  "Value = "      << value << " was found " << std::endl;

    // Copy one vector to another
    std::vector<int> vector3(5);

    std::copy(vector1.begin() , vector1.end() , vector3.begin() );
    for (auto it2 = vector3.begin() ; it2 < vector3.end() ; it2 ++)
    {
        std::cout   <<  *it2     << '\t';
    }
    std::cout   <<  std::endl;

    // Count 
    std::cout   << "Number of " << value << " in vector2 is " << std::count( vector2.begin() , vector2.end() , value ) << std::endl;

    // Equal
    if (std::equal(vector1.begin() , vector1.end() , vector2.begin() ) )
        std::cout   << "vector1 and vector2 are equal    "  << std::endl;
    else 
        std::cout   << "vector1 and vector2 are not equal"  << std::endl;

    // Sub-range of equals
    std::pair<std::vector<int>::iterator,std::vector<int>::iterator> bounds;
    bounds = std::equal_range(vector2.begin() , vector2.end() , 2);
    std::cout       <<      "Range is from "    <<  bounds.first - vector2.begin()   << " to " <<   bounds.second - vector2.begin()     <<  std::endl;

    // Fill

    std::vector<int> vector4(5);
    std::fill(vector4.begin(), vector4.begin() + 2, 2);
    
    for (auto it3 = vector4.begin(); it3 < vector4.end() ; it3 ++)
    {
        std::cout << *it3 << '\t';
    }
    std::cout << std::endl;

    // Find 

    auto it4 = std::find (vector2.begin(), vector2.begin() + 2 , 1);
    std::cout << *it4 << std::endl;

    
}