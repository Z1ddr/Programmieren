#include "Vector.h"
#include <iostream>

int main()
{
    Vector V1;
    Vector V2(5);
    Vector V3(10);
    std::cout << V1.get_size() << std::endl;
    V2.set_size(15);
}