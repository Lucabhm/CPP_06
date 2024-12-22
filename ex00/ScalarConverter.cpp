/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucabohn <lucabohn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 14:18:52 by lucabohn          #+#    #+#             */
/*   Updated: 2024/12/22 17:12:10 by lucabohn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(const ScalarConverter &cpy) {}

ScalarConverter	&ScalarConverter::operator= (const ScalarConverter &cpy) {return (*this);}

ScalarConverter::~ScalarConverter(void) {}

void	ScalarConverter::convert(std::string input)
{
	char		char_value;
	int			int_nbr;
	float		float_nbr;
	double		double_nbr;

	double_nbr = std::stod(input);
	if (!std::isnan(double_nbr))
	{
		int_nbr = static_cast<int>(double_nbr);
		if (int_nbr > 31 && int_nbr < 127)
		{
			char_value = static_cast<char>(double_nbr);
			std::cout << "char: " << "'" << char_value << "'" << std::endl;
		}
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << int_nbr << std::endl;
	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	float_nbr = static_cast<float>(double_nbr);
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << float_nbr << "f" << std::endl;
	std::cout << "double: " << double_nbr << std::endl;
}
