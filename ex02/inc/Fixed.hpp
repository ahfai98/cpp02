/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:32:20 by jyap              #+#    #+#             */
/*   Updated: 2025/01/04 10:10:42 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fp_value;
		static const int	_fract_bits = 8;

	public:
	// Constructors
		Fixed();
		Fixed(const int input);
		Fixed(const float input);
		Fixed(const Fixed &copy);

	// Destructors
		~Fixed();

	// Overloaded Operators
		Fixed &operator=(const Fixed &src);

		// Comparison Operators
		bool operator>(Fixed fixed)const;
		bool operator<(Fixed fixed)const;
		bool operator>=(Fixed fixed)const;
		bool operator<=(Fixed fixed)const;
		bool operator==(Fixed fixed)const;
		bool operator!=(Fixed fixed)const;

		// Arithmetic Operators
		float operator+(Fixed fixed)const;
		float operator-(Fixed fixed)const;
		float operator*(Fixed fixed)const;
		float operator/(Fixed fixed)const;

		// pre-increment Operators
		Fixed operator++();
		Fixed operator--();
		// post-increment Operators
		Fixed operator++(int);
		Fixed operator--(int);

	// Public Methods
		float toFloat(void)const;
		int	  toInt(void)const;
		static Fixed &min(Fixed &first, Fixed &second);
		static const Fixed &min(const Fixed &first, const Fixed &second);
		static Fixed &max(Fixed &first, Fixed &second);
		static const Fixed &max(const Fixed &first, const Fixed &second);

	// Getter
		int getRawBits(void)const;
	// Setter
		void setRawBits(const int raw);
};

// Overload for ostream
std::ostream &operator<<(std::ostream &o, const Fixed &fixed);

#endif
