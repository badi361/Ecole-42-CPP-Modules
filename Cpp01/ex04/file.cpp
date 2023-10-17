#include "file.hpp"

file::file(char **av)
{
	this->i_file.open(av[1]);
    if (!(this->i_file.is_open()))
	{
		std::cout << "There Is No Such File" << std::endl;
		exit(0);
	}
	else
	{
		std::string output = av[1];
		this->o_file.open(output + ".replace", std::ios::trunc);
		if(!(this->o_file.is_open()))
		{
			std::cout << "File Is Can Not Open" << std::endl;
			exit(0);
		}
	}
}
