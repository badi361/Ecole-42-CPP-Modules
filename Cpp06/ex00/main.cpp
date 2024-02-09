#include "ScalarConverter.hpp"
#include <iostream>
#include <sstream>

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Wrong argument count" << std::endl;
    }
    else
    {
        ScalarConverter::convert(av[1]);
    }
}