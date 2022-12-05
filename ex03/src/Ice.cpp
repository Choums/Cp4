/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:30:49 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/05 17:16:10 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

	/*  Constructors/Destructor */
Ice::Ice() : AMateria("ice")
{
	std:: cout << "[ Ice Materia has been created ! ]" << std::endl;
}

Ice::Ice(Ice const& cpy) : AMateria(cpy.getType())
{
	std::cout << " [ An Ice Materia has been copied ! ]" << std::endl;
}

Ice::~Ice()
{
	std::cout << " [ Ice Materia has been destroyed ! ]" << std::endl;
}

	/*	Methods */
AMateria*	Ice::clone() const
{
	Ice*	clone = new Ice();
	return (clone);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::cout;
}

	/*  Assignment Operator Overload */
Cure&	operator=(Cure const& obj)
{
	if (this != &obj)
		this->_type = obj.getType();
	std::cout << "[ Assignement operator called ]" << std::endl;
	return (*this);
}