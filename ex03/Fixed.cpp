/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:01:55 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/17 10:46:58 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>


Fixed& Fixed::min(Fixed& first, Fixed& second)
{
	if (first < second)
		return (first);
	return (second);
}

Fixed& Fixed::max(Fixed& first, Fixed& second)
{
	if (first > second)
		return (first);
	return (second);
}

const Fixed& Fixed::min(const Fixed& first, const Fixed& second)
{
	if (first < second)
		return (first);
	return (second);
}

const Fixed& Fixed::max(const Fixed& first, const Fixed& second)
{
	if (first > second)
		return (first);
	return (second);
}

Fixed& Fixed::operator++() //++a
{
	this->_fixedValue += 1;
	return *this;
}

Fixed Fixed::operator++(int) //a++
{
	Fixed temp = *this;
	this->_fixedValue += 1;
	return temp;
}

Fixed& Fixed::operator--()
{
	this->_fixedValue -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	this->_fixedValue -= 1;
	return temp;
}

Fixed Fixed::operator+(const Fixed&other) const
{
	return(Fixed(this->toFloat() + other.toFloat()));
};

Fixed Fixed::operator-(const Fixed&other) const
{
	return(Fixed(this->toFloat() - other.toFloat()));
};

Fixed Fixed::operator*(const Fixed&other) const
{
	return(Fixed(this->toFloat() * other.toFloat()));
};

Fixed Fixed::operator/(const Fixed&other) const
{
	return(Fixed(this->toFloat() / other.toFloat()));
};

bool Fixed::operator<(const Fixed& other) const
{
	if (this->_fixedValue < other._fixedValue)
		return (true);
	return (false);
};

bool Fixed::operator>(const Fixed& other) const
{
	if (this->_fixedValue > other._fixedValue)
		return (true);
	return (false);
};

bool Fixed::operator>=(const Fixed& other) const
{
	if (this->_fixedValue >= other._fixedValue)
		return (true);
	return (false);
};

bool Fixed::operator<=(const Fixed& other) const
{
	if (this->_fixedValue <= other._fixedValue)
		return (true);
	return (false);
};

bool Fixed::operator==(const Fixed& other) const
{
	if (this->_fixedValue == other._fixedValue)
		return (true);
	return (false);
};

bool Fixed::operator!=(const Fixed& other) const
{
	if (this->_fixedValue != other._fixedValue)
		return (true);
	return (false);
};


std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
};

Fixed::Fixed() : _fixedValue(0)
{
	// std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const int intNumber)
{
	// std::cout << "Int constructor called" << std::endl;
	_fixedValue = intNumber * (1 << _bits);
};

Fixed::Fixed(const float floatNumber)
{
	// std::cout << "Float constructor called" << std::endl;
	_fixedValue = roundf(floatNumber * (1 << _bits));
};

Fixed::Fixed(const Fixed& other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
};

Fixed& Fixed::operator=(const Fixed& other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_fixedValue = other.getRawBits();
	}
	return *this;
};

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return _fixedValue;
};

void Fixed::setRawBits(int const raw)
{
	_fixedValue = raw;	
};

float Fixed::toFloat( void ) const
{
	int	fixedValue = getRawBits();
	float floatNumber = (float)(fixedValue) / (1 << _bits);
	return floatNumber;
};

int Fixed::toInt( void ) const
{
	int fixedValue = getRawBits();
	int intNumber = fixedValue / (1 << _bits);
	return intNumber;
};