/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:32:54 by jyap              #+#    #+#             */
/*   Updated: 2024/09/21 20:08:30 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

static float area (const Point p1, const Point p2, const Point p3)
{
	float	area;

	//Area A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2
	area =	(
			( p1.getX().toFloat() * ( p2.getY().toFloat() - p3.getY().toFloat() ) )
			+ ( p2.getX().toFloat() * ( p3.getY().toFloat() - p1.getY().toFloat() ) )
			+ ( p3.getX().toFloat() * ( p1.getY().toFloat() - p2.getY().toFloat() ) )
			)
			/ 2;

	if (area >= 0)
		return (area);
	else
		return (area * -1);
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	float d0, d1, d2, d3;

	d0 = area(a, b, c);
	d1 = area(point, a, b);
	d2 = area(point, b, c);
	d3 = area(point, a, c);

	if ( d1 == 0 || d2 == 0 || d3 == 0)
		return (false);
	else if ( d1 + d2 + d3 == d0 )
		return (true);
	return (false);
}
