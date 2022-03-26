#include <iostream>
#include <string>

int main()
{
    // Theory
    // Character arrays are null terminated i.e '\0'
    
    std::size_t length          = 2;
    std::size_t start_position  = 0;
    std::size_t end_position    = 4;

    std::cout << "Usage of std::string"                                     <<  std::endl;
    std::cout << "--------------------"                                     <<  std::endl;

    std::cout << "std::size_t start_position    = "   << start_position     <<  std::endl;
    std::cout << "std::size_t end_position      = "   << end_position       <<  std::endl;
    std::cout << "std::size_t length            = "   << length             <<  std::endl;

    // Initialize
    std::string str1        =       "My name is Harsh Maithani";
    std::string str2        =       {};
    std::string sample      =       "abcd efgh 01234 567 89 01234 56 78 910 acbd fehg";
    
    const char *cstring1{"example of c-style string"};

    //getline(std::cin,str);
 
    std::string example1;                            // Default constructor
    std::cout   <<  "std::string example1 :                         "    << example1    <<  "That's right, there is nothing"    << std::endl;

    std::string example2{"Scientists"};              // Copy constructor
    std::cout   <<  "std::string example2{\"Scientists\"}           "    << example2    <<  std::endl;
    
    std::string example3{example2};                  // Copy constructor
    std::cout   <<  "std::string example3{example2}                 "    << example3    <<  std::endl;

    std::string example4{example2,start_position};   // From start position till end
    std::cout   <<  "std::string example4{example2,start_position}                  "   << example4    <<  std::endl;

    std::string example5{example2,start_position,length};              // From start position till length
    std::cout   <<  "std::string example5{example2,start_position,length}           "   << example5    <<  std::endl;

    const char *example6{"C-string Scientists"};      // Copying a C-style string into std::string 
    std::string example7{example6};
    std::cout   <<  "const char *example6{\"C-string Scientists\"} --> example7       "   << example7    <<  std::endl; 

    std::cout   <<  "std::string --> C-string                                       "   << example7.c_str() <<  std::endl;  

    std::string example8(length, 'A');                    // 
    std::cout   <<  "std::string example8(length,'A')                               "   << example8    <<  std::endl; 

    std::string name1    =   "Albert";               // 6 characters
    std::string name2    =   "Einstein";             // 8 characters

    std::cout   <<  "Name1:         "    << name1               <<  std::endl;    // Prints: Albert
    std::cout   <<  "Name2:         "    << name2               <<  std::endl;    // Prints: Einstein

    std::cout   <<  "name1[0]:      "    << name1[0]            <<  std::endl;    // Prints: A
    std::cout   <<  "name1.at(0):   "    << name1.at(0)         <<  std::endl;    // Prints: A
    std::cout   <<  "name1.front(): "    << name1.front()       <<  std::endl;    // Prints: A
    std::cout   <<  "name1.back():  "    << name1.back()        <<  std::endl;    // Prints: t
    std::cout   <<  "name1.data():  "    << name1.data()        <<  std::endl;    // Returns the contents as const C-style string 
    //std::cout   <<  "Compare two C-style strings name1.data() and name2.data(): " << 

    char name_char[20];

    name1.copy(name_char,length,start_position);
    name_char[length] = '\0';
    std::cout   <<  "name1.copy(name_char,length,start_position) --> name_char:                 " << name_char  << std::endl;

    std::cout   <<  "Capacity:      "    << name1.capacity()    <<  std::endl;    // Prints: 15
    std::cout   <<  "Is empty?      "    << name1.empty()       <<  std::endl;    // Prints: 0 = No
    std::cout   <<  "Length:        "    << name1.length()      <<  std::endl;    // Prints: 6
    std::cout   <<  "Size:          "    << name1.size()        <<  std::endl;    // Prints: 6
    std::cout   <<  "Max size:      "    << name1.max_size()    <<  std::endl;    // Prints: 2147483647

    name1       =   "Albert";
    name1.clear();                      //  Delete all characters in the string
    std::cout   <<  "name1.clear                        : "    <<   name1   << "\t \t That's right, it clears the whole string!"  << std::endl;

    name1       =   "Albert";
    name1.insert(1, std::string("O"));  //  Insert string at index
    std::cout   <<  "name1.insert(1, std::string(\"O\"))  : "  <<   name1   << std::endl;

    name1       =   "Albert";
    name1.insert(1, std::string("Ab")); //  Insert string at index
    std::cout   <<  "name1.insert(1, std::string(\"Ab\")) : "  <<   name1   << std::endl;

    name1       =   "Albert";
    name1.erase(start_position,length);                   //  Erase characters from an index till a length
    std::cout   <<  "name1.erase(start_position,length) : "  <<   name1   << std::endl;

    name1       =   "Albert";
    char suffix1{'a'};          
    name1.push_back(suffix1);           //  Concatenates characters to end of string - Name becomes Alberta
    std::cout   <<  "name1.push_back(suffix1)           : "    <<   name1   << std::endl;

    name1       =   "Albert";
    name1.push_back('s');
    std::cout   <<  "name1.push_back('s')               : "    <<   name1   << std::endl;
    
    name1       =   "Albert";
    std::cout   <<  "name1.push_back('ss')              : "    <<   "\t \t Not allowed"   << std::endl; // name1.push_back('ss');   // not allowed

    name1       =   "Albert";
    name1.pop_back();                   // Erases last character
    std::cout   <<  "name1.pop_back()                   : "    <<   name1   << std::endl;

    name1       =   "Albert";
    name1.append("curie");              // Append string 
    std::cout   <<  "name1.append(\"curie\")              : "   <<  name1   << std::endl;

    name1       =   "Albert";
    name1       =   name1 + name2;
    std::cout   <<  "name1 + name2                      : "   <<    name1   << std::endl;
    
    name1       =   "Albert";
    name1[5] = 'o';                     // Assign at specific position
    std::cout   <<  "name1[5] = 'o'                     : "   <<    name1   << std::endl;

    name1       =   "Albert";
    name1.assign(name2);                // Assign new value to string - Name becomes Einstein
    std::cout   <<  "name1.assign(name2)                : "   <<    name1   << std::endl; 
    
    name1.assign("Albert");
    name1.assign(name2,start_position,length);            // Assign new value to string - Name becomes Ei
    std::cout   <<  "name1.assign(name2,start_position,length)            : "  <<     name1   << std::endl;

    name1       =   "Albert";
    std::cout   <<  "name1.compare(name2)               : "  << name1.compare(name2)      << std::endl;   // Compares two strings, 0 if equivalent, + if 
    
    std::cout   <<  "Albert == Einstein                 : "  << (name1 == name2)          << std::endl;
    std::cout   <<  "Albert < Einstein                  : "  << (name1 < name2)           << std::endl;
    std::cout   <<  "Albert > Einstein                  : "  << (name1 > name2)           << std::endl; 

    name1       =   "Albert";
    std::cout   <<  "name1.replace(start_position,length,name2)                                 : "  << name1.replace(start_position,length,name2)                          << std::endl;

    name1       =   "Albert";
    std::cout   <<  "name1.replace(start_position,length,name2,start_position,length)           : "  << name1.replace(start_position,length,name2,start_position,length)    << std::endl;

    name1       =   "Albert";
    std::cout   <<  "name1.substr(start_position,length)                                        : "  << name1.substr(start_position,length)                                 << std::endl;   // Substring at index with length

    name1       =   "Albert";
    char dest[2];
    length = name1.copy(dest,length,start_position);
    dest[length] = '\0';
 
    std::cout   <<  "name1.copy(dest,length,start_position) --> dest                            : "  << dest                                                                << std::endl;     // Copies characters to a char array

    // resize   - changes the number of characters stored
    
    std::string word1       =   "Red";
    std::string word2       =   "Blue";
    std::cout   <<  "Before swapping "  << " Word 1: \t" <<  word1 << " \t Word 2: \t " << word2 << std::endl;      // swap             - Swaps the contents of two strings
    std::swap(word1,word2);
    std::cout   <<  "After swapping  "  << " Word 1: \t" <<  word1 << " \t Word 2: \t " << word2 << std::endl;
    std::swap(word1,word2);

    std::string name3{"ABCDAF"};                         // 6 characters
    std::cout   <<  "name3                              : "     << name3                          << std::endl;
    std::cout   <<  "name3.find(\"A\")                    : "     << name3.find("A")                << std::endl;   // find              - Find characters in the string 
    std::cout   <<  "name3.rfind(\"A\")                   : "     << name3.rfind("A")               << std::endl;   // rfind             - Find the last occurrence of a substring         
    std::cout   <<  "name3.find_first_of(\"A\")           : "     << name3.find_first_of("A")       << std::endl;   // find_first_of     - Find first occurrence of characters 
    std::cout   <<  "name3.find_first_not_of(\"A\")       : "     << name3.find_first_not_of("A")   << std::endl;   // find_first_not_of - Find first absence of characters
    std::cout   <<  "name3.find_last_of(\"A\")            : "     << name3.find_last_of("A")        << std::endl;   // find_last_of      - Find last occurrence of characters 
    std::cout   <<  "name3.find_last_not_of(\"A\")        : "     << name3.find_last_not_of("A")    << std::endl;   // find_last_not_of  - Find last absence of characters 
   
    // Iterators

    auto it1 = name3.begin();
    std::cout   <<  "auto it1 = name3.begin()           : "     << *it1                            << std::endl;      // Iterator to the beginning of the string

    auto it2 = name3.cbegin();
    std::cout   <<  "auto it2 = name3.cbegin()          : "     << *it2                            << std::endl;

    auto it3 = name3.rbegin();
    std::cout   <<  "auto it3 = name3.rbegin()          : "     << *it3                            << std::endl;

    auto it4 = name3.end();
    std::cout   <<  "auto it4 = name3.end()             : "     << *it4                            << std::endl;      // Iterator to the end + 1 of the string

    auto it5 = name3.cend();
    std::cout   <<  "auto it5 = name3.cend()            : "     << *it5                            << std::endl;      // Iterator to the end + 1 of the string

    auto it6 = name3.rend();
    std::cout   <<  "auto it6 = name3.rend()            : "     << *it6                            << std::endl;      // Iterator to the end+1 of the string 

}