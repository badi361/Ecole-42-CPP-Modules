#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

# include <iostream>
# include <vector>
# include <fstream>
# include <sstream>

class BitcoinExchange
{
    private:
        std::vector <std::string> db;
        std::vector <float> db_value;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        void	readbc(std::string path);
};

#endif