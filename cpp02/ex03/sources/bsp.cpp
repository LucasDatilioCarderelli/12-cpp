/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:53:00 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/12 23:04:23 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed area(const Point& a, const Point& b, const Point& c) {
    return ((b.getX() - a.getX()) * (c.getY() - a.getY())) -
           ((c.getX() - a.getX()) * (b.getY() - a.getY()));
}

bool bsp(const Point a, const Point b, const Point c, const Point point) {
    Fixed totalArea = area(a, b, c).getRawBits();
    Fixed area1 = area(point, b, c).getRawBits();
    Fixed area2 = area(a, point, c).getRawBits();
    Fixed area3 = area(a, b, point).getRawBits();

    if (totalArea == 0) {
        return false;
    }

    return (area1 >= 0 && area2 >= 0 && area3 >= 0) || (area1 <= 0 && area2 <= 0 && area3 <= 0);
}
