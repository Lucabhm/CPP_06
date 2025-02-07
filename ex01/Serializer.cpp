/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 19:16:11 by lbohm             #+#    #+#             */
/*   Updated: 2025/02/07 09:17:45 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer	&Serializer::operator= (const Serializer &cpy) {return (*this);}

Serializer::~Serializer(void) {}

uintptr_t	Serializer::serialize(Data *ptr)
{
	uintptr_t	value;

	value = reinterpret_cast<uintptr_t>(ptr);
	return (value);
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	Data	*value;

	value = reinterpret_cast<Data *>(raw);
	return (value);
}
