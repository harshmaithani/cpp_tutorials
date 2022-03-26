#include <iostream>

const int f() { 
    std::cout << "f" << std::endl;
    return 0;
}

const int g() {
    std::cout << "g" << std::endl;
    return 1; 
}

void h(const int, const int) {
    std::cout << "h" << std::endl;
}

int main(int argc, char *argv[]) { 
    h(f(), g()); 
}