/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:29:51 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/01 14:09:10 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Misterious")
{
	std::cout << "[ A new misterious animal has joined the zoo ! ]" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "[ A new " << type << " has joined the zoo ! ]" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& cpy)
{
	this->_type = cpy._type;
	std::cout << "[ A " << this->_type << " copied another ! ]" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[ A WrongAnimal has passed away ! ]" << std::endl;
}

void	WrongAnimal::makeSound()
{
	std::cout << "[ zzzzzzzzzzzz ! ]" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

/*	Assignement Operator Overload */
WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& obj)
{
	if (this != &obj) 
		this->_type = obj.getType();
	return (*this);
}