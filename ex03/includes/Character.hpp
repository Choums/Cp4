/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:47:05 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/05 15:05:50 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./ICharacter.hpp"
#include "./AMateria.hpp"

class Character;

class Character : public ICharacter {
	public:
			/*	Constructors/Destructor */
		Character();
		virtual ~Character();
	private:
		std::string	_name;
		AMateria*	_items[4];
};