/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:42:58 by root              #+#    #+#             */
/*   Updated: 2022/12/07 16:02:40 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

	/*	Constructors/Destructor */
Character::Character() : _name("Unknow")
{
	for (int i(0); i < 4; i++)
		this->_items[i] = NULL;
	std::cout << GREEN << "[ An Unknow Character has appeared ! ]" << END << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	for (int i(0); i < 4; i++)
		this->_items[i] = NULL;
	std::cout << GREEN << "[ A Character has appeared: " << this->_name << " ! ]" << END << std::endl;
}

Character::Character(Character const& cpy)
{
	for (int i(0); i < 4; i++)
		delete this->_items[i];
	this->_name = cpy._name;
	for (int i(0); i < 4; i++)
		this->_items[i] = cpy._items[i];
	std::cout << GREEN << "[ The Character " << this->_name << " has been copied ! ]" << END << std::endl;
}

Character::~Character()
{
	for (int i(0); i < 4; i++)
		delete this->_items[i];
	std::cout << RED << "[ The Character " << this->_name << " has been destroyed ! ]" << END << std::endl;
}

	/*	Methods */
void	Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (int i(0); i < 4; i++)
	{
		if (!this->_items[i])
		{
			this->_items[i] = m;
			std::cout << "< " << this->_name << " has equiped a new " << m->getType() << " Materia at emplacement: " << i << " >" << std::endl;
			return ;
		}
	}
	std::cout << "[ " << this->_name << " doesn't have enough space to store new Materias, You must unequip one first ! ]" << std::endl;
}

void	clear_floor(int s)
{
	if (s && g == 10)
		for (int i(0); i < 10; i++)
			delete sol[i];
	if (!s)
		for (int i(0); i < g; i++)
			delete sol[i];
}

/*
 *	La fonction membre unequip() ne doit PAS delete la Materia !
*/
void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		for (int i(0); i < 4; i++)
			if (i == idx)
			{
				sol[g++] = this->_items[i];
				clear_floor(1);
				this->_items[i] = NULL;
			}
}

/*
 *	La fonction membre use(int, ICharacter&) utilisera la Materia de l’emplacement[idx],
 *	et passera la cible en paramètre à la fonction AMateria::use.
*/
void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
	{
		if (this->_items[idx])
			this->_items[idx]->use(target);
		else std::cout << RED << "[ There is no Materia at this emplacement ! ]" << END << std::endl;
	}
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
		std::cout << "[ This Character equipments and name has been assigned ! ]" << std::endl;
	}
	return (*this);
}

	/*	Accessor */
std::string const&	Character::getName() const
{
	return (this->_name);
}
