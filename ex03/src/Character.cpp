/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:42:58 by root              #+#    #+#             */
/*   Updated: 2022/12/06 20:19:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

	/*	Constructors/Destructor */

Character::Character() : _name("Unknow")
{
	for (int i(0); i < 4; i++)
		this->_items[i] = NULL;
	std::cout << "[ An Unknow Character has appeared ! ]" << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	for (int i(0); i < 4; i++)
		this->_items[i] = NULL;
	std::cout << "[ A Character has appeared: " << this->_name << " ! ]" << std::endl;
}

Character::Character(Character const& cpy)
{
	for (int i(0); i < 4; i++)
		delete this->_items[i];
	this->_name = cpy._name;
	for (int i(0); i < 4; i++)
		this->_items[i] = cpy._items[i];
	std::cout << "[ The Character " << this->_name << " has been copied ! ]" << std::endl;
}

Character::~Character()
{
	for (int i(0); i < 4; i++)
		delete this->_items[i];
	std::cout << "[ The Character " << this->_name << " has beed destroyed ! ]" << std::endl;
}

	/*	Methods */
void	Character::equip(AMateria *m)
{
	for (int i(0); i < 4; i++)
	{
		if (this->_items[i] == NULL)
		{
			this->_items[i] = m;
			std::cout << this->_name << " Has equiped a new " << m->getType() << " Materia" << std::endl;
			return ;
		}
	}
	std::cout << "[ " << this->_name << " Doesn't have enough space to store new Materia, You unequip one first ! ]" << std::endl;
}

/*
 *	La fonction membre unequip() ne doit PAS delete la Materia !
 *
*/
void	Character::unequip(int idx)
{

}

/*
 *	La fonction membre use(int, ICharacter&) utilisera la Materia de l’emplacement[idx],
 *	et passera la cible en paramètre à la fonction AMateria::use.
*/
void	Character::use(int idx, ICharacter& target)
{
	this->_items[idx]->use(target);
}

	/*	Assignment Operator Overload */
Character&	Character::operator=(Character const& obj)
{
	if (this != &obj)
	{
		for (int i(0); i < 4; i++)
			delete this->_items[i];
		this->_name = obj._name;
		for (int i(0); i < 4; i++)
			this->_items[i] = obj._items[i];
		std::cout << "[ This Character equipments and name has need assigned ! ]" << std::endl;
	}
	return (*this);
}

	/*	Accessor */
std::string const&	Character::getName() const
{
	return (this->_name);
}