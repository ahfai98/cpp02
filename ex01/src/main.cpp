/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:32:12 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 18:03:33 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	std::cout << "a=============" << std::endl;
	const Fixed b(10);
	std::cout << "b(10)=============" << std::endl;
	const Fixed c(42.42f);
	std::cout << "c(42.42f)=============" << std::endl;
	const Fixed d(b);
	std::cout << "d(b)=============" << std::endl;
	a = Fixed(1234.4321f);
	std::cout << "a=Fixed(1234.4321f)============" << std::endl;

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	std::cout << "b is " << b.toFloat() << " as float" << std::endl;
	std::cout << "c is " << c.toFloat() << " as float" << std::endl;
	std::cout << "d is " << d.toFloat() << " as float" << std::endl;

	return (0);
}
