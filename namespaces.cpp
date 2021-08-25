// Do not compile this file or add to CMakeLists.txt

#include <iostream>

using namespace std;                // Pre-processor directive

using std::cout;                    // Can also directly use std::cout instead 

namespace aname{}                   // Creating a namespace called aname

namespace                           // Unnamed namespace. This can be used if we want to make some code static
{
    void doSomething()              // Can only be accessed in this file
    {
        std::cout <<    " Inside unnamed namespace "    <<   std::endl;
    }
}

inline namespace bname              // Inline namespaces are useful if we want to modify code
{                                   // and retain legacy code as well as new code 
    
    void doSomething()              // In absence of explicit namespace, this particular function doSomething will be called
    {
        std::cout <<    " Inside namespace namespace1 " <<  std::endl;
    }
}

namespace cname                     // Nested namespaces
{
    namespace dname
    {
        void doSomething(void)
        {
            std::cout << "Inside nested namespace"  << std::endl;
        }
    }

} 

namespace gname = cname::dname;     // Namespace alias

int main()
{
    cname::dname::doSomething();   // Nested namespace
    gname::doSomething();          // Example of namespace alias
}
