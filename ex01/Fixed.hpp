/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 10:10:18 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/15 15:33:46 by cwolf            ###   ########.fr       */
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
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);