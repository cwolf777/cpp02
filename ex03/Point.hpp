/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:39:15 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/17 12:35:44 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;
	public:
		Point();
		Point(float x, float y);
		Point(const Point &other);
		Point& operator=(const Point& other) = delete;
		~Point();

		Fixed getX() const;
		Fixed getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);