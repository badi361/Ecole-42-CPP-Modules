#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed
{
    private:
		int value;
		static const int bits;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &cpy);
        Fixed& operator=(const Fixed &cpy);
        int	getRawBits(void);
        void		setRawBits(int const raw);
};

#endif