#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <fstream>
class	file
{
	private:
		std::string		temporary;
	public:
		std::ifstream	i_file;
		std::ofstream	o_file;
		char			k;
		file(char **av);
		std::ofstream get_file();
};

#endif