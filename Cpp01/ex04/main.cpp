#include "file.hpp"

int main (int ac, char **av)
{
    if (ac == 4)
    {
        file    file(av);
		size_t	index;
		size_t i = 0;
		std::string temporary;
		while (file.i_file >> file.k)
		{
			file.i_file >> std::noskipws;
			temporary += file.k;
		}
		i = 0;
		int k;
		int t;
		while (temporary[i])
		{
			k = 0;
			t = 0;
			index = temporary.find(av[2], i);
			if (i == index)
			{
				while (temporary[i] == av[2][k] && av[2][k] && av[3][t])
				{
					file.o_file << av[3][t];
					if (temporary[i])
						i++;
					k++;
					t++;
				}
				while (av[2][k] != '\0')
				{
					k++;
					i++;
				}
				while (av[3][t])
				{
					file.o_file << av[3][t];
					t++;
				}
			}
			else if (temporary[i] != '\0')
			{
				file.o_file << temporary[i];
				i++;
			}
		}
    }
    else
	{
    	std::cout << "Wrong Argument" << std::endl;
		return (0);
	}
}
