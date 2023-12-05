#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>
class	Fixed
{
	private:
		int	value;
		const static int bits = 8;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const int value);
		Fixed(const float float_value);
		Fixed(const Fixed &cpy);
		Fixed& operator=(const Fixed &cpy);
		int		getRawBits(void);
		void	setRawBits(int const raw);
		bool	operator==(const Fixed &fixed);
		bool	operator!=(const Fixed &fixed);
		Fixed	operator+(const Fixed &fixed);
		Fixed	operator-(const Fixed &fixed);
		bool	operator<(const Fixed &fixed);
		bool	operator>(const Fixed &fixed);
		bool	operator<=(const Fixed &fixed);
		bool	operator>=(const Fixed &fixed);
		Fixed	operator*(const Fixed &fixed);
		Fixed	operator/(const Fixed &fixed);
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		int		toInt(void) const;
		float	toFloat(void) const;
		static	const Fixed&	max(const Fixed &var1, const Fixed &var2);
		static	const Fixed&	min(const Fixed &var1, const Fixed &var2);
		Fixed &max(Fixed &o1, Fixed &o2);
		Fixed &min(Fixed &o1, Fixed &o2);

};
std::ostream&	operator<<(std::ostream& os, const Fixed &fixed);

#endif