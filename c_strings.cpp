#include <iostream>
#include <stdio.h>
#include <iterator>             // for std::size
#include <cstring>

int main(int argc, char* argv[])
{
    // C-style strings
    // Simply an array of characters that use a null terminator '\0' - ascii code 0 to indicate end of string
    // Null-terminated string 

    char word1[5]{"a"};                     // Works. No compiler error. 
                                            // a 0 0 0 0
    //char word2[1]{"albert"};              // Compiler error: Initialization not possible 

    std::cout       <<      word1               << std::endl;                   // prints: a
    std::cout       <<      strlen(word1)       << std::endl;                   // prints: 1
    
    for (auto i : word1)
    {
        std::cout << i << std::endl;
    }

    char source1[]{"abcdefghij"};
    char source2[]{"a"};
    char dest1[]{"abcdefghij"};
    char dest2[]{"a"};

    std::cout       <<  "dest1 = "      <<    dest1               <<  std::endl;
    std::cout       <<  "dest2 = "      <<    dest2               <<  std::endl;
    std::strcpy(dest1,source2);         // Copying 
    std::strcpy(dest2,source1);         // Copying 
    std::cout       <<      "After strcpy"      <<  std::endl;
    std::cout       <<  "dest1 = "      <<    dest1               <<  std::endl;
    std::cout       <<  "dest2 = "      <<    dest2               <<  std::endl;

    char word2[]     =   {"albert"};
    char word3[20]{"einstein"};
    char word4[]{"marie"};
    char word5[]{"curie"};

    strcat(word2,word3);                                        // Concatenates: word 2 = word 2 + word 3
    std::cout       <<      word2       <<      std::endl;
    std::cout       <<      word3       <<      std::endl;
    
    strncat(word4,word5,5);                                     // Concatenates: word 4 = word 4 + word 5
    std::cout       <<      word4       <<      std::endl;
    std::cout       <<      word5       <<      std::endl;

    char word6[]{"isaac"};
    char word7[]{"newton"};

    bool compare_words  =   strcmp(word6,word7);                // 0 if equal
    std::cout       <<      compare_words               <<      std::endl;

    char word8[]{"alpha"};
    char word9[]{"alphonso"};

    bool compare_words2  =   strncmp(word8,word9,2);            // 0 if equal
    std::cout       <<      compare_words2              <<      std::endl;



}