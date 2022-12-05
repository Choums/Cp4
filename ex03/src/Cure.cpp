/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:18:04 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/05 17:07:47 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std:: cout << "[ Cure Materia has been created ! ]" << std::endl;
}

Cure::Cure(Cure const& cpy) : AMateria(cpy.getType())
{
	std::cout << " [ A Cure Materia has been copied ! ]" << std::endl;
}

Cure::~Cure()
{
	std::cout << " [ Cure Materia has been destroyed ! ]" << std::endl;
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