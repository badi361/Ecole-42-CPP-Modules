#include <iostream>

int main(int ac, char **av)
{
	if (ac > 1)
	{
		int	i;
		int	k;

		k = 1;
		while (av[k])
		{
			i = 0;
			while (av[k][i])
			{
				if (av[k][i] >= 97 && av[k][i] <= 122)
					av[k][i] = av[k][i] - 32;
				std::cout << av[k][i];
				i++;
			}
			k++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}