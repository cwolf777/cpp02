/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwolf <cwolf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:45:49 by cwolf             #+#    #+#             */
/*   Updated: 2025/07/17 12:33:39 by cwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(){};

Point::Point(float x, float y) : _x(x), _y(y) {};

Point::Point(const Point &other) : _x(other._x), _y(other._y) {}

Point::~Point(){};

Fixed Point::getX() const
{
	return this->_x;
}

Fixed Point::getY() const
{
	return this->_y;
}