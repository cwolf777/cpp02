/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:53:39 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/16 19:40:08 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Fixed
{
	private:
	int _fixedValue;
	static const int _bits = 8;
	
	public:
	Fixed();
	Fixed(const int other);
	Fixed(const float other);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed();
	
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
	static Fixed& min(Fixed& first, Fixed& second);
	static Fixed& min(const Fixed& first, const Fixed& second);
	static Fixed& max(Fixed& first, Fixed& second);
	static Fixed& max(const Fixed& first, const Fixed& second);

	bool operator>(const Fixed& other) const;
	bool operator<(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;

	int operator+(const Fixed&other) const;
	int operator-(const Fixed&other) const;
	int operator*(const Fixed&other) const;
	int operator/(const Fixed&other) const;

	Fixed& operator++();
	Fixed& operator++(int);
	Fixed& operator--();
	Fixed& operator--(int);
	
	
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);