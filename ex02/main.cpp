/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucabohn <lucabohn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 21:20:47 by lucabohn          #+#    #+#             */
/*   Updated: 2025/01/08 22:02:03 by lucabohn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base/Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

int	main(void)
{
	Base	*first;

	srand(static_cast<unsigned int>(time(NULL)));
	first = generate();
	identify(first);
	identify(*first);
	delete first;
	return (0);
}

Base	*generate(void)
{
	int	nbr;

	nbr = rand() % 3;
	if (nbr == 0)
		return (new A());
	else if (nbr == 1)
		return (new B());
	return (new C());
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "indentified pointer as A class" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "indentified pointer as B class" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "indentified pointer as C class" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A	&class1 = dynamic_cast<A &>(p);
		std::cout << "indentified reference as A class" << std::endl;
		return ;
	}
	catch (const std::bad_cast &e) {}
	try
	{
		B	&class2 = dynamic_cast<B &>(p);
		std::cout << "indentified reference as B class" << std::endl;
		return ;
	}
	catch(const std::bad_cast &e) {}
	try
	{
		C	&class3 = dynamic_cast<C &>(p);
		std::cout << "indentified reference as C class" << std::endl;
		return ;
	}
	catch(const std::bad_cast &e) {}
}
