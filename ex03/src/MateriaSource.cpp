/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:04:19 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/07 13:04:01 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

	/*	Constructors/Destructor */
MateriaSource::MateriaSource()
{
	for (int i(0); i < 4; i++)
		this->_items[i] = NULL;
	std::cout << GREEN << "[ A Materia Source has been created ! ]" << END << std::endl;	
}

MateriaSource::MateriaSource(MateriaSource const& cpy)
{
	for (int i(0); i < 4; i++)
		delete this->_items[i];
	for (int i(0); i < 4; i++)
		this->_items[i] = cpy._items[i];
	std::cout << GREEN << "[ A Materia Source has been copied ! ]" << END << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i(0); i < 4; i++)
		delete this->_items[i];
	std::cout << RED << "[ Materia Source is destroyed ! ]" << END << std::endl;
}

	/*	Method */
void	MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return ;
	for (int i(0); i < 4; i++)
	{
		if (this->_items[i] == NULL)
		{
			this->_items[i] = m;
			std::cout << "[ " << this->_items[i]->getType() << " has been added to source ! ]" << std::endl;
			return ;
		}
	}
	std::cout << "[ There isn't enough space to store a new Materia ! ]" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i(0); i < 4; i++)
	{
		if (this->_items[i] && !type.compare(this->_items[i]->getType()))
		{
			std::cout << "[ " << this->_items[i]->getType() << " has been cloned ! ]" << std::endl;
			return (this->_items[i]->clone());
		}
	}
	std::cout << RED << "[ The " << type << " Materia type is unknown, only Ice and Cure can be recreated ! ]" << END << std::endl;
	return (NULL);
}

	/*	Assignment Operator Overload */
MateriaSource&	MateriaSource::operator=(MateriaSource const& obj)
{
	if (this != &obj)
	{
		for (int i(0); i < 4; i++)
			delete this->_items[i];
		for (int i(0); i < 4; i++)
			this->_items[i] = obj._items[i];
		std::cout << "[ This Materia Source specifities has been assigned ! ]" << std::endl;
	}
	return (*this);
}