/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:45:42 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/05 11:28:03 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->_lightbulb = new Brain();
	std::cout << "[ A new Dog ! ]" << std::endl;
}


Dog::Dog(Dog const& cpy)
{
	if (this != &cpy)
	{
		this->_type = cpy._type;
		this->_lightbulb = new Brain(*cpy._lightbulb);
	}
	std::cout << "[ A Doggy copied another ! ]" << std::endl;
}

Dog::~Dog()
{
	delete this->_lightbulb;
	std::cout << "[ A Doggy has passed away ! ]" << std::endl;
}

void	Dog::makeSound()
{
	std::cout << "Waouf ! Waouf ! Waouf !" << std::endl;
}

Dog&	Dog::operator=(Dog const& obj)
{
	std::cout << "[ Copy assignment operator called ]" << std::endl;
	if (this != &obj)
	{
		delete this->_lightbulb;
		this->_type = obj._type;
		this->_lightbulb = new Brain(*obj._lightbulb);
	}
	return (*this);
}

void	Dog::getThought() const
{
	std::cout << this->_lightbulb->getIdeas(rand() % 100) << std::endl;
}