#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int	value;
		const static int bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const int value);
		Fixed(const Fixed &cpy);
		Fixed& operator=(const Fixed &cpy);
		int		getRawBits(void);
		void	setRawBits(int const raw);
		bool	operator==(const Fixed &fixed);
		bool	operator!=(const Fixed &fixed);
		Fixed	operator+(const Fixed &fixed);
		Fixed	operator-(const Fixed &fixed);
};

#endif