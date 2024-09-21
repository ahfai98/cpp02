/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:32:49 by jyap              #+#    #+#             */
/*   Updated: 2024/09/21 17:19:58 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Header-protection
#ifndef POINT_HPP
# define POINT_HPP

// Includes
#include <string>
#include <iostream>
#include "Fixed.hpp"

// classes

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;

	public:
	// Constructors
		Point();
		Point(const float x, const float y);
		Point(const Point& copy);

	// Destructors
		~Point();

	// Overloaded Operators
		Point& operator=(const Point& src);

	// Public Methods

	// Getter
		const Fixed& getX(void)const;
		const Fixed& getY(void)const;
	// Setter

};

// Overload for ostream
std::ostream&	operator<<(std::ostream& o, Point const point);

#endif