/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:32:58 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 18:09:57 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors
Fixed::Fixed(): _fp_value(0)
{
	// std::cout << "Fixed Default Constructor called." << std::endl;
}

Fixed::Fixed(const int input)
{
	// std::cout << "Fixed const intructor called." << std::endl;
	this->_fp_value = input << this->_fract_bits;
}

Fixed::Fixed(const float input)
{
	// std::cout << "Fixed Float Constructor called." << std::endl;
	this->_fp_value = roundf(input * (1 << this->_fract_bits));
}

Fixed::Fixed(const Fixed &copy)
{
	// std::cout << "Fixed Copy Constructor called." << std::endl;
	*this = copy;
}

// Destructors
Fixed::~Fixed()
{
	// std::cout << "Fixed Destructor called." << std::endl;
}

// Overloaded Operators
Fixed &Fixed::operator=(const Fixed &src)
{
	// std::cout << "Fixed Assignment operator called." << std::endl;
	if (this != &src)
		this->_fp_value = src.getRawBits();

	return (*this);
}

// Overloaded Comparison Operators
bool	Fixed::operator>(Fixed fixed) const
{
	return (this->toFloat() > fixed.toFloat());
}

bool	Fixed::operator<(Fixed fixed) const
{
	return (this->toFloat() < fixed.toFloat());
}

bool	Fixed::operator>=(Fixed fixed) const
{
	return (this->toFloat() >= fixed.toFloat());
}

bool	Fixed::operator<=(Fixed fixed) const
{
	return (this->toFloat() <= fixed.toFloat());
}

bool	Fixed::operator==(Fixed fixed) const
{
	return (this->toFloat() == fixed.toFloat());
}

bool	Fixed::operator!=(Fixed fixed) const
{
	return (this->toFloat() != fixed.toFloat());
}

// Overloaded Arithmetic Operators
float	Fixed::operator+(Fixed fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

float	Fixed::operator-(Fixed fixed) const
{
	return (this->toFloat() - fixed.toFloat());
}

float	Fixed::operator*(Fixed fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

float	Fixed::operator/(Fixed fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}

// Overloaded pre-increment Operators
Fixed	Fixed::operator++()
{
	this->_fp_value++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->_fp_value--;
	return (*this);
}

// Overloaded post-increment Operators
Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->_fp_value;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->_fp_value;
	return (tmp);
}

// Public Methods
float	Fixed::toFloat(void)const
{
	return ((float)this->_fp_value / (float)(1 << this->_fract_bits));
}

int	Fixed::toInt(void)const
{
	return (this->_fp_value >> this->_fract_bits);
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}

// Getter
int	Fixed::getRawBits(void)const
{
	// std::cout << "getRawBits member function called." << std::endl;
	return (this->_fp_value);
}

// Setter
void	Fixed::setRawBits(const int raw)
{
	// std::cout << "setRawBits member function called." << std::endl;
	this->_fp_value = raw;
}

// Overload for ostream
std::ostream &operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return (o);
}
