#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value;
}

Fixed::Fixed(const Fixed &cpy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

Fixed& Fixed::operator=(const Fixed &cpy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(cpy.value);
    return (*this);
}

int	Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

bool	Fixed::operator==(const Fixed &fixed)
{
	std::cout << "== operator called" << std::endl;
	return (this->value == fixed.value);
}

bool	Fixed::operator!=(const Fixed &fixed)
{
	std::cout << "!= operator called" << std::endl;
	return (this->value != fixed.value);
}

Fixed	Fixed::operator+(const Fixed &fixed)
{
	std::cout << "+ operator called" << std::endl;
	this->setRawBits(this->value + fixed.value);
	return (*this);
}

Fixed Fixed::operator-(const Fixed &fixed)
{
	std::cout << "- operator called" << std::endl;
	this->setRawBits(this->value - fixed.value);
	return (*this);
}