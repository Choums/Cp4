/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:18:04 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/07 13:04:21 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std:: cout << GREEN << "[ Cure Materia has been created ! ]" << END << std::endl;
}

Cure::Cure(Cure const& cpy) : AMateria(cpy.getType())
{
	std::cout << GREEN << "[ A Cure Materia has been copied ! ]" << END << std::endl;
}

Cure::~Cure()
{
	std::cout << RED << "[ Cure Materia has been destroyed ! ]" << END << std::endl;
}

	/*	Methods */
AMateria*	Cure::clone() const
{
	Cure*	clone = new Cure();
	return (clone);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

	/*	Assignment Operator Overload */
Cure&	Cure::operator=(Cure const& obj)
{
	if (this != &obj)
		this->_type = obj.getType();
	std::cout << "[ Assignement operator called ]" << std::endl;
	return (*this);
}