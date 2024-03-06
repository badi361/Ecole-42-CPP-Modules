#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    readbc("data.csv");
}

BitcoinExchange::~BitcoinExchange()
{

}

void	BitcoinExchange::readbc(std::string path)
{
	std::ifstream file(path);
	if (!file)
	{
		std::cerr << "File can not open!" << std::endl;
		exit(0);
	}
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::istringstream ss(line);
		std::string temp;
		std::getline(ss, temp, ',');
		db.push_back(temp);
		std::cout << temp << " ";
		std::string temp2;
		std::getline(ss,temp2);

		db_value.push_back(std::stof(temp2));
		std::cout << temp2 << std::endl;
	}
}