#include <iostream>
#include "../DragonCore.h"

//Dragon additions namespace
namespace dragon_additions
{
    int add(const int num1, const int num2)
    {
        return num1 + num2;
    }

    int subtract(const int num1, const int num2)
    {
        return  num1 - num2;
    }

    int multiply(const int num1, const int num2)
    {
        return  num1 * num2;
    }

    int divide(const int num1, const int num2)
    {
        return  num1 / num2;
    }
}
