/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucabohn <lucabohn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 19:18:25 by lbohm             #+#    #+#             */
/*   Updated: 2025/01/08 20:45:42 by lucabohn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data		*value = new Data;
	uintptr_t	intvalue;

	value->nbr = 10;
	value->value = "Hello";
	std::cout << "addr = " << value << std::endl;
	std::cout << "nbr = " << value->nbr << std::endl;
	std::cout << "value = " << value->value << std::endl;
	intvalue = Serializer::serialize(value);
	std::cout << "int value = " << intvalue << std::endl;
	value = NULL;
	std::cout << "addr = " << value << std::endl;
	value = Serializer::deserialize(intvalue);
	std::cout << "addr = " << value << std::endl;
	std::cout << "nbr = " << value->nbr << std::endl;
	std::cout << "value = " << value->value << std::endl;
	delete value;
	return (0);
}