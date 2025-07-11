/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 16:52:48 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/11 17:02:38 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _fixedValue(0){
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed& other)
{
	//kopieren???
	std::cout << "Copy constructor called" << std::endl;
};

Fixed& Fixed::operator=(const Fixed& other)
{
	//copy assignend sachen
};

Fixed::~Fixed(){
	//delete
};