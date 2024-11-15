/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:32:49 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 18:21:35 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <string>
#include <iostream>
#include "Fixed.hpp"

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;

	public:
	// Constructors
		Point();
		Point(const float x, const float y);
		Point(const Point &copy);

	// Destructors
		~Point();

	// Overloaded Operators
		Point &operator=(Point &src);

	// Public Methods

	// Getter
		const Fixed &getX(void)const;
		const Fixed &getY(void)const;
};

// Overload for ostream
std::ostream &operator<<(std::ostream &o, const Point &point);

#endif
