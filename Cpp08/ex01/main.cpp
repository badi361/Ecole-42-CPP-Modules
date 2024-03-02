#include "Span.hpp"

int main()
{
    try
    {
        Span sp(6);
        sp.addNumber(1);
        sp.addNumber(15);
        sp.addNumber(90);
        sp.addNumber(179);
        sp.addNumber(27);
        sp.addNumber(6);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
       std::cout << e.what() << std::endl;
    }
//     try
//     {
//         Span sp(10000);
//         sp.addNumbers(10000);
//         std::vector<int> k = sp.getNumbers();
//         std::vector<int>::iterator i = k.begin();
//         while (i != k.end())
//             std::cout << *i++ << std::endl;
//         std::cout << "-------RESULT----------" << std::endl;
//         std::cout << sp.shortestSpan() << std::endl;
//         std::cout << sp.longestSpan() << std::endl;

//     }
//     catch(const std::exception& e)
//     {
//         std::cout << e.what() << std::endl;
//     }
}