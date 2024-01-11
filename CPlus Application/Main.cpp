#include <iostream>
#include <string>
#include "Includes/DragonCore/DragonCore.h"
#include "Includes/DragonCore/DragonAdditions/DragonAdditions.h"

void register_command(string_t cmd)
{
    int num1;
    int num2;
    int result;
    
    if (cmd == "add")
    {
        dragon_core::system_output("Please enter the first number: ");
        dragon_core::input >> num1;
        dragon_core::system_output("please enter the second number: ");
        dragon_core::input >> num2;

        result = dragon_additions::add(num1, num2);
    }
    else if (cmd == "subtract")
    {
        dragon_core::system_output("Please enter the first number: ");
        dragon_core::input >> num1;
        dragon_core::system_output("please enter the second number: ");
        dragon_core::input >> num2;

        result = dragon_additions::subtract(num1, num2);
    }
    else if (cmd == "multiply")
    {
        dragon_core::system_output("Please enter the first number: ");
        dragon_core::input >> num1;
        dragon_core::system_output("please enter the second number: ");
        dragon_core::input >> num2;

        result = dragon_additions::multiply(num1, num2);
    }
    else if (cmd == "divide")
    {
        dragon_core::system_output("Please enter the first number: ");
        dragon_core::input >> num1;
        dragon_core::system_output("please enter the second number: ");
        dragon_core::input >> num2;

        result = dragon_additions::divide(num1, num2);
    }
    else
        return;

    dragon_core::system_output("The result is:" + std::to_string(result));
}

int main()
{
    dragon_core::system_output("Hello, Welcome to C++ ");
    dragon_core::system_output("What would you like to do? ");
    string_t cmd;
    dragon_core::input >> cmd;
    register_command(cmd);
    
    return 0;
}