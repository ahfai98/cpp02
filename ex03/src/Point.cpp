/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:33:08 by jyap              #+#    #+#             */
/*   Updated: 2024/09/21 20:06:52 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Constructors
Point::Point(): _x(0), _y(0)
{
	// std::cout << "Point Default Constructor called" << std::endl;
}

Point::Point(const float x, const float y):_x(x), _y(y)
{
	// std::cout << "Constuctor called" << std::endl;
}

Point::Point(const Point& copy): _x(copy.getX()), _y(copy.getY())
{
	// std::cout << "Point Copy Constructor called" << std::endl;
	// *this = copy;
}

// Destructors
Point::~Point()
{
	// std::cout << "Point Destructor called" << std::endl;
}

// Overloaded Operators
Point& Point::operator=(Point& src)
{
	// std::cout << "Point Assignment operator called" << std::endl;
	return (src);
}

// Public Methods

// Getter
const Fixed& Point::getX(void)const
{
	return (this->_x);
}

const Fixed& Point::getY(void)const
{
	return (this->_y);
}

// Setter


// Overload for ostream
std::ostream&	operator<<(std::ostream& o, Point const& point)
{
	o << "_x: " << point.getX() << " / _y: " << point.getY() << std::endl;
	return (o);
}
