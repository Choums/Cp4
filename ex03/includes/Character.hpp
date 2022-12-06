/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:47:05 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/06 19:41:12 by root             ###   ########.fr       */
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
		Character(std::string name);
		Character(Character const& cpy);
		virtual ~Character();
		
			/*	Methods */
		void    equip(AMateria *m);
        void    unequip(int idx);
        void    use(int idx, ICharacter& target);
	
			/*	Assignment Operator */
		Character&	operator=(Character const& obj);

			/*  Accessors */
        std::string const& getName() const;

	private:
		std::string	_name;
		AMateria*	_items[4];
};