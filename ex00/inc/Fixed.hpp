/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:31:48 by jyap              #+#    #+#             */
/*   Updated: 2024/09/21 17:19:58 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Header-protection
#ifndef FIXED_HPP
# define FIXED_HPP

// Includes
#include <iostream>

// classes
class Fixed
{
	private:
		int	_fp_value;
		static const int _fract_bits;

	public:
	// Constructors
		Fixed();
		Fixed(const Fixed& copy);

	// Destructors
		~Fixed();

	// Overloaded Operators
		Fixed& operator=(const Fixed& src);

	// Public Methods

	// Getter
		int getRawBits(void)const;
	// Setter
		void setRawBits(int const raw);

};

#endif