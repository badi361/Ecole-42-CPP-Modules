#include "Fixed.hpp"

int main(void)
{
	Fixed b( Fixed( 3 ) + Fixed( 2 ) );
    std::cout << b.getRawBits() << std::endl;
}