/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:12:51 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/15 15:43:28 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main (void)
{
	Fixed	a;
	Fixed const b(10);
	Fixed const c(42.4243f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	
	std::cout << "a is " << a.toInt() << " as integer" <<std::endl;
	std::cout << "b is " << b.toInt() << " as integer" <<std::endl;
	std::cout << "c is " << c.toInt() << " as integer" <<std::endl;
	std::cout << "d is " << d.toInt() << " as integer" <<std::endl;
}