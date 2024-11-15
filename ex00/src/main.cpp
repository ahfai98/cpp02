/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:31:56 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 17:36:43 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	std::cout << "a============" << std::endl;
	Fixed b(a);
	std::cout << "b(a)============" << std::endl;
	Fixed c;
	std::cout << "c============" << std::endl;
	c = b;
	std::cout << "c=b============" << std::endl;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return (0);
}
