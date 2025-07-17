/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:22:59 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/17 12:53:15 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed area(Point const &p1, Point const &p2, Point const &p3)
{
	return Fixed( fabsf(
			(p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()) +
			 p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat()) +
			 p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat())) / 2.0f
		)
	);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed full = area(a, b, c);
	Fixed part1 = area(point, b, c);
	Fixed part2 = area(a, point, c);
	Fixed part3 = area(a, b, point);

	if (part1 == 0 || part2 == 0 || part3 == 0)
		return (false);

	if (full == part1 + part2 + part3)
		return (true);

	return (false);
}