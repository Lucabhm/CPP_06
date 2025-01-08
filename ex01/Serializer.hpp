/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucabohn <lucabohn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 19:16:40 by lbohm             #+#    #+#             */
/*   Updated: 2025/01/08 20:54:27 by lucabohn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include "Data.hpp"

class Serializer
{
	private:
		Serializer(void);
		Serializer(const Serializer &cpy);
		Serializer	&operator= (const Serializer &cpy);
		~Serializer(void);
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data			*deserialize(uintptr_t raw);
};

#endif