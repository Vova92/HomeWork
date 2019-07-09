#include <iostream>

#include "lib.h"

int main (int, char **)
{
    std::cout << "Hello,world" << std::endl;
    std::cout << "Version: " << version() << std::endl;
    system("pause");

    return 0;
}
