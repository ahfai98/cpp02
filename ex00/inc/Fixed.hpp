/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:31:48 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 18:03:50 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	_fp_value;
		static const int _fract_bits = 8;

	public:
	// Constructors
		Fixed();
		Fixed(const Fixed &copy);

	// Destructors
		~Fixed();

	// Overloaded Operators
		Fixed &operator=(const Fixed &src);

	// Public Methods

	// Getter
		int getRawBits(void)const;
	// Setter
		void setRawBits(const int raw);
};

#endif
