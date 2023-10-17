#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <fstream>
class	file
{
	private:
		std::string		temporary;
	public:
		char			k;
		std::ifstream	i_file;
		std::ofstream	o_file;
		file(char **av);
		//~file();
		std::ofstream get_file();
};

#endif