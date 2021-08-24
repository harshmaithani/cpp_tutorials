#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

int main()
{
    int     a = 5;
    int*    b = &a;
    int*    c{&a};
    int*    d = nullptr;
    int*    e = NULL;
    int**   f = &b;
    int**   g = &d;
    int*    h{new int};         // dynamically allocate 
            *h = 4;
    delete h;
    //Car*    cp = nullptr;
    //cp->
    //(*cp).
}
