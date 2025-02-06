/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucabohn <lucabohn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 14:19:10 by lucabohn          #+#    #+#             */
/*   Updated: 2025/02/06 18:16:52 by lucabohn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cmath>
# include <regex>
# include <climits>

class ScalarConverter
{
	private:
		ScalarConverter(void) = delete;
		ScalarConverter(const ScalarConverter &cpy) = delete;
		ScalarConverter	&operator= (const ScalarConverter &cpy);
		~ScalarConverter(void);
	public:
		static void	convert(std::string input);
};

bool	isChar(std::string input);
void	convertToChar(char value);
bool	isInt(std::string input);
void	convertToInt(int value);
bool	isFloat(std::string input);
void	convertToFloat(float value);
bool	isDouble(std::string input);
void	convertToDouble(double value);

#endif