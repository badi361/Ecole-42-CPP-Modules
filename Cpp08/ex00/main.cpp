#include "easyfind.hpp"
#include <vector>
int main()
{
    std::vector<int> arg;
    arg.push_back(1);
    arg.push_back(2);
    arg.push_back(3);
    arg.push_back(4);
    arg.push_back(5);
    arg.push_back(6);
    arg.push_back(7);
    arg.push_back(8);
    arg.push_back(9);
    arg.push_back(9);
    arg.push_back(11);
    arg.push_back(12);

    try
    {
        std::cout << ::easyfind(arg, 6) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Number is not found!" << std::endl;
    }
    
}