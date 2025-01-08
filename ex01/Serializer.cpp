/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucabohn <lucabohn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 19:16:11 by lbohm             #+#    #+#             */
/*   Updated: 2025/01/08 20:44:10 by lucabohn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

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
