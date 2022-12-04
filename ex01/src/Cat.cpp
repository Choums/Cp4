/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:45:45 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/04 18:13:26 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->_lightbulb = new Brain();
	std::cout << "[ A new Cat has joined the zoo ! ]" << std::endl;
}

Cat::Cat(Cat const& cpy)
{
	if (this != &cpy)
	{
		this->_type = cpy._type;
		this->_lightbulb = new Brain(*cpy._lightbulb);
	}
	std::cout << "[ A " << this->_type << " copied another ! ]" << std::endl;
}

Cat::~Cat()
{
	delete this->_lightbulb;
	std::cout << "[ A Cat has passed away ! ]" << std::endl;
}

void	Cat::makeSound()
{
	std::cout << "Meow ! Meow ! Meow !" << std::endl;
}

Cat&	Cat::operator=(Cat const& obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
		this->_lightbulb = new Brain(*obj._lightbulb);
	}
	return (*this);
}

void	Cat::getThought() const
{
	std::srand(time(0));
	std::cout << this->_lightbulb->getIdeas((rand() % 100)) << std::endl;
}