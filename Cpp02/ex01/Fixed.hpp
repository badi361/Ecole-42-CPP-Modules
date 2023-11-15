#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int					value;
		static const int	bits;
	public:
		Fixed();
		~Fixed();
};

#endif