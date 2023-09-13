/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:44:06 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/11 23:00:49 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point() : x(0), y(0) {}

Point::Point(float x, float y) : x(x), y(y) {}

Point::Point(const Point& point) {
    *this = point;
}

Point& Point::operator=(const Point& point) {
	const_cast<Fixed  &>(this->x) = point.getX();
	const_cast<Fixed  &>(this->y) = point.getY();
	return (*this);
}

Point::~Point() {}

Fixed Point::getX() const {
    return x;
}

Fixed Point::getY() const {
    return y;
}
