#define NDEBUG                  // This removes assertions at compile time

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

#include <assert.h>

int main(int argc,char** argv)
{
    int age = 20;

    assert (age > 20);
}