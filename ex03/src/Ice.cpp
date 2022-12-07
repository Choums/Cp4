/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:30:49 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/07 13:04:16 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

	/*  Constructors/Destructor */
Ice::Ice() : AMateria("ice")
{
	std:: cout << GREEN << "[ Ice Materia has been created ! ]" << END << std::endl;
}

Ice::Ice(Ice const& cpy) : AMateria(cpy.getType())
{
	std::cout << GREEN << "[ An Ice Materia has been copied ! ]" << END << std::endl;
}

Ice::~Ice()
{
	std::cout << RED << "[ Ice Materia has been destroyed ! ]" << END << std::endl;
}

	/*	Methods */
AMateria*	Ice::clone() const
{
	Ice*	clone = new Ice();
	return (clone);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

	/*  Assignment Operator Overload */
Ice&	Ice::operator=(Ice const& obj)
{
	if (this != &obj)
		this->_type = obj.getType();
	std::cout << "[ Assignement operator called ]" << std::endl;
	return (*this);
}