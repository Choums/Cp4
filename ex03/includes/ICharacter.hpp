/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:27:44 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/07 12:20:57 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once



#include "./AMateria.hpp"

class AMateria;

class ICharacter {
	public:
		virtual ~ICharacter() {};
		
			/*  Methods */
		virtual void    equip(AMateria *m) = 0;
		virtual void    unequip(int idx) = 0;
		virtual void    use(int idx, ICharacter& target) = 0;

			/*  Accessors */
		virtual std::string const& getName() const = 0;
};