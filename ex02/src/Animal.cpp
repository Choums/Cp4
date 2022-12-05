/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:45:46 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/01 13:50:52 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

/*  Constructors/Destructors */
AAnimal::AAnimal() : _type("")
{
	std::cout << "[ A new AAnimal has joined the zoo ! ]" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "[ A new " << type << " has joined the zoo ! ]" << std::endl;
}

AAnimal::AAnimal(AAnimal const& cpy)
{
	this->_type = cpy._type;
	std::cout << "[ A " << this->_type << " copied another ! ]" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "[ An AAnimal has passed away ! ]" << std::endl;
}

/*	Accessors */
std::string	AAnimal::getType() const
{
	return (this->_type);
}

/*	Assignement Operator Overload */
AAnimal&	AAnimal::operator=(AAnimal const& obj)
{
	if (this != &obj) 
		this->_type = obj.getType();
	return (*this);
}
