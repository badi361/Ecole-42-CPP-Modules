#include <iostream>

int main(void)
{
    std::string string = "HI THIS IS BRAIN";

    std::string *stringPTR = &string; 
    std::string &stringREF = string;
    std::cout << &string << " :string address" << std::endl;
    std::cout << stringPTR << " :ptr address" << std::endl;
    std::cout << &stringREF << " :ref address" << std::endl;

    std::cout << string << " :string value" << std::endl;
    std::cout << *stringPTR << " :ptr value" << std::endl;
    std::cout << stringREF << " :ref value" << std::endl;
    return (0);
}