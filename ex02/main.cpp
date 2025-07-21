/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:52:50 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/21 09:09:47 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed const c(Fixed(10));
	Fixed const d(Fixed(10.5f));

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;

	std::cout << "\n Comparison:" << std::endl;
	std::cout << "b > c: " << (b > c) << std::endl;
	std::cout << "b < c: " << (b < c) << std::endl;
	std::cout << "c == d: " << (c == d) << std::endl;
	std::cout << "c != d: " << (c != d) << std::endl;

	std::cout << "\n Min/Max:" << std::endl;
	std::cout << "Min of c and d: " << Fixed::min(c, d) << std::endl;
	std::cout << "Max of c and d: " << Fixed::max(c, d) << std::endl;

	std::cout << "\n Increment / Decrement:" << std::endl;
	Fixed e;
	std::cout << "e: " << e << std::endl;
	std::cout << "++e: " << ++e << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << "e++: " << e++ << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << "--e: " << --e << std::endl;
	std::cout << "e--: " << e-- << std::endl;
	std::cout << "e: " << e << std::endl;

	std::cout << "\n Arithmetic:" << std::endl;
	Fixed x(2.5f);
	Fixed y(1.25f);
	std::cout << "x: " << x << ", y: " << y << std::endl;
	std::cout << "x + y: " << x + y << std::endl;
	std::cout << "x - y: " << x - y << std::endl;
	std::cout << "x * y: " << x * y << std::endl;
	std::cout << "x / y: " << x / y << std::endl;

	return 0;
}
