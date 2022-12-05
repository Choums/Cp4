/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:47:29 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/05 17:18:26 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria(std::string const& type) : _type(type)
{
	std::cout << "[ Materia has beed created ! ]" << std::endl;	
}

AMateria::AMateria(AMateria const& cpy)
{
	if (this != &cpy)
		this->_type = cpy.getType();
	std::cout << " [ A Materia has been copied ! ]" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "[ Materia is destroyed ! ]" << std::endl;
}

AMateria&	AMateria::operator=(AMateria const& obj)
{
	if (this != &obj)
		this->_type = obj.getType();
	std::cout << "[ Assignement operator called ]" << std::endl;
	return (*this);
}

std::string const&	AMateria::getType() const
{
	return (this->_type);
}