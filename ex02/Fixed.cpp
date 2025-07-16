/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:01:55 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/16 19:41:57 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>


Fixed& Fixed::operator++()
{
	this->_fixedValue += 1;
	return *this;
}

Fixed& Fixed::operator++(int)
{
	Fixed* temp(this);
	this->_fixedValue += 1;
	return *temp;
}

Fixed& Fixed::operator--()
{
	this->_fixedValue -= 1;
	return *this;
}

Fixed& Fixed::operator--(int)
{
	Fixed* temp(this);
	this->_fixedValue -= 1;
	return *temp;
}

int Fixed::operator+(const Fixed&other) const
{
	return this->toInt() + other.toInt();
};

int Fixed::operator-(const Fixed&other) const
{
	return this->toInt() - other.toInt();
};

int Fixed::operator*(const Fixed&other) const
{
	return this->toInt() * other.toInt();
};

int Fixed::operator/(const Fixed&other) const
{
	return this->toInt() / other.toInt();
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
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const int intNumber)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedValue = intNumber * (1 << _bits);
};

Fixed::Fixed(const float floatNumber)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedValue = roundf(floatNumber * (1 << _bits));
};

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
};

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_fixedValue = other.getRawBits();
	}
	return *this;
};

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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