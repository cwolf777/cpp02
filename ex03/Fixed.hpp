/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:53:39 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/21 09:22:21 by cwolf            ###   ########.fr       */
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

	bool operator>(const Fixed& other) const;
	bool operator<(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;

	Fixed operator+(const Fixed&other) const;
	Fixed operator-(const Fixed&other) const;
	Fixed operator*(const Fixed&other) const;
	Fixed operator/(const Fixed&other) const;

	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);
	
	static Fixed& min(Fixed& first, Fixed& second);
	static Fixed& max(Fixed& first, Fixed& second);

	static const Fixed& min(const Fixed& first, const Fixed& second);
	static const Fixed& max(const Fixed& first, const Fixed& second);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);