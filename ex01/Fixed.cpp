/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:04:38 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/15 15:31:49 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

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

float Fixed::toFloat( void ) const //typecasten
{
	int	fixedValue = getRawBits();
	float floatNumber = (float)(fixedValue) / (1 << _bits);
	return floatNumber;
};

int Fixed::toInt( void ) const //typecasten
{
	int fixedValue = getRawBits();
	int intNumber = fixedValue / (1 << _bits);
	return intNumber;
};