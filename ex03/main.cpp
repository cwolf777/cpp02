/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:52:50 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/17 12:54:54 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point a(0.0f, 0.0f);
	Point b(10.0f, 0.0f);
	Point c(10.0f, 10.0f);
	Point point(5.0f, 3.0f);

	if (bsp(a, b, c, point))
		std::cout << "YES" << std::endl;
	return 0;
}
