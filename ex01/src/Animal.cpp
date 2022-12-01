/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:45:46 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/01 13:50:52 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

/*  Constructors/Destructors */
Animal::Animal() : _type("")
{
	std::cout << "[ A new Animal has joined the zoo ! ]" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "[ A new " << type << " has joined the zoo ! ]" << std::endl;
}

Animal::Animal(Animal const& cpy)
{
	this->_type = cpy._type;
	std::cout << "[ A " << this->_type << " copied another ! ]" << std::endl;
}

Animal::~Animal()
{
	std::cout << "[ An Animal has passed away ! ]" << std::endl;
}

/*	Methods */
void	Animal::makeSound()
{
	if (this->_type.compare("Cat") || this->_type.compare("Dog"))
		std::cout << "[ You hear an unknow and distant noise ! ]" << std::endl;
}

/*	Accessors */
std::string	Animal::getType() const
{
	return (this->_type);
}

/*	Assignement Operator Overload */
Animal&	Animal::operator=(Animal const& obj)
{
	if (this != &obj) 
		this->_type = obj.getType();
	return (*this);
}
