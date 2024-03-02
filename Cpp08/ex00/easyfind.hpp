#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template <typename T>
int easyfind(T &t, int number)
{
	typename T::iterator it = t.begin();
	while (it != t.end())
	{
		if (*it == number)
			return (number);
		it++;
	}
	throw std::exception();
}

#endif