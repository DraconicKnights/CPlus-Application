// DragonCore.h
#ifndef DRAGONADDITIONS_H
#define DRAGONADDITIONS_H

#include <iostream>
#include "../DragonCore.h"

// Forward declarations
namespace dragon_additions
{
    int add(const int num1, const int num2);
    int subtract(const int num1, const int num2);
    int multiply(const int num1, const int num2);
    int divide(const int num1, const int num2);
}

// Header file includes implementation file
#include "DragonAdditions.cpp"

#endif

