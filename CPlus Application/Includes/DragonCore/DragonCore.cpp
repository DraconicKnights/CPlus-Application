#include <iostream>

//Class Definition for output and input text
class output_t final : public std::ostream {
public:
    output_t() : std::ostream(std::cout.rdbuf()) {}
};

class input_t final : public std::istream
{
public:
    input_t() : std::istream(std::cin.rdbuf()) {}
};

//Name space for setting variables
namespace dragon_core
{
    output_t output;
    input_t input;

    void system_output(const string_t& msg)
    {
        output << msg;
    }
    
}
