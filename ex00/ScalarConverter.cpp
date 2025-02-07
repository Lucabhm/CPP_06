/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 14:18:52 by lbohm             #+#    #+#             */
/*   Updated: 2025/02/07 09:17:06 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter	&ScalarConverter::operator= (const ScalarConverter &cpy) {return (*this);}

ScalarConverter::~ScalarConverter(void) {}

void	ScalarConverter::convert(std::string input)
{
	if (input.empty() || (!isChar(input) && !isInt(input)
		&& !isFloat(input) && !isDouble(input)))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	if (isChar(input))
		convertToChar(input[0]);
	else if (isInt(input))
		convertToInt(std::stoi(input));
	else if (isFloat(input))
		convertToFloat(std::stof(input));
	else if (isDouble(input))
		convertToDouble(std::stod(input));
}

bool	isChar(std::string input)
{
	if (input.length() == 1 && isprint(input[0]) && !isdigit(input[0]))
		return (true);
	return (false);
}

void	convertToChar(char value)
{
	std::cout << "char: '" << value << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << std::endl;
}

bool	isInt(std::string input)
{
	std::regex	pattern("^[+-]?\\d+$");

	if (std::regex_match(input, pattern))
	{
		try
		{
			std::stoi(input);
		}
		catch(const std::exception& e)
		{
			return (false);
		}
		return (true);
	}
	return (false);
}

void	convertToInt(int value)
{
	if (isprint(value))
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << value << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << std::endl;
}

bool	isFloat(std::string input)
{
	std::regex	pattern("^[+-]?\\d+\\.\\d+[fF]$|^(\\+inff|-inff|nanf)$");

	if (std::regex_match(input, pattern))
	{
		try
		{
			std::stof(input);
		}
		catch(const std::exception& e)
		{
			return (false);
		}
		return (true);
	}
	return (false);
}

void	convertToFloat(float value)
{
	if (isprint(value) && !std::isnan(value) && !std::isinf(value))
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	else if (std::isnan(value) || std::isinf(value))
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (!std::isnan(value) && !std::isinf(value) && value <= INT_MAX && value >= INT_MIN)
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << value << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << std::endl;
}

bool	isDouble(std::string input)
{
	std::regex	pattern("^[+-]?\\d+\\.\\d+$|^(\\+inf|-inf|nan)$");

	if (std::regex_match(input, pattern))
	{
		try
		{
			std::stod(input);
		}
		catch(const std::exception& e)
		{
			return (false);
		}
		return (true);
	}
	return (false);
}

void	convertToDouble(double value)
{
	if (isprint(value) && !std::isnan(value) && !std::isinf(value))
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	else if (std::isnan(value) || std::isinf(value))
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (!std::isnan(value) && !std::isinf(value) && value <= INT_MAX && value >= INT_MIN)
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << value << std::endl;
}