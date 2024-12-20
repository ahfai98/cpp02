/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:31:52 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 18:03:50 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed(): _fp_value(0)
{
	std::cout << "Fixed Default Constructor called." << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Fixed Copy Constructor called." << std::endl;
	*this = copy;
}

// Destructors
Fixed::~Fixed()
{
	std::cout << "Fixed Destructor called." << std::endl;
}

// Overloaded Operators
Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Fixed Assignment operator called." << std::endl;
	if (this != &src)
		this->_fp_value = src.getRawBits();
	return (*this);
}

// Public Methods

// Getter
	int	Fixed::getRawBits(void)const
	{
		std::cout << "getRawBits member function called." << std::endl;
		return (this->_fp_value);
	}

// Setter
	void	Fixed::setRawBits(const int raw)
	{
		std::cout << "setRawBits member function called." << std::endl;
		this->_fp_value = raw;
	}
