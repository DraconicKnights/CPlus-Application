// DragonCore.h
#ifndef DRAGONCORE_H
#define DRAGONCORE_H

#include <iostream>

// Type Defined
using string_t = std::string;

// Forward declarations
class output_t;
class input_t;
namespace dragon_core {
    extern output_t output;
    extern input_t input;
    void system_output(const string_t& msg);
    input_t system_input();
}

// Header file includes implementation file
#include "DragonCore.cpp"

#endif
