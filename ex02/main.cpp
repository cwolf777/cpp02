/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:52:50 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/16 19:44:47 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{ 
	Fixed a(4.5f);
	std::cout << ++a << std::endl;
	++a;
	std::cout << a << std::endl;
	// if (b == a)
	// 	std::cout << "Jap1" << std::endl;
	// if (b != a)
	// 	std::cout << "Jap2" << std::endl;
	// if (b <= a)
	// 	std::cout << "Jap3" << std::endl;
	// if (b >= a)
	// 	std::cout << "Jap4" << std::endl;

	// return 0; 
}
