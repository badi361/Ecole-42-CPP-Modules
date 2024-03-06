#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Wrong Argumant Count!" << std::endl;
        exit(0);
    }
    BitcoinExchange btc;
    (void)av;
    return (0);
}