/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:31:56 by jyap              #+#    #+#             */
/*   Updated: 2025/01/04 10:26:19 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	std::cout << "a" << std::endl;
	Fixed a;
	std::cout << "============" << std::endl;
	std::cout << "b(a)" << std::endl;
	Fixed b(a);
	std::cout << "============" << std::endl;
	std::cout << "c" << std::endl;
	Fixed c;
	std::cout << "============" << std::endl;
	std::cout << "c = b" << std::endl;
	c = b;
	std::cout << "============" << std::endl;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return (0);
}
