/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:45:45 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/05 11:44:24 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	this->_lightbulb = new Brain();
	std::cout << "[ A new Cat ! ]" << std::endl;
}

Cat::Cat(Cat const& cpy)
{
	if (this != &cpy)
	{
		this->_type = cpy._type;
		this->_lightbulb = new Brain(*cpy._lightbulb);
	}
	std::cout << "[ A Kitty copied another ! ]" << std::endl;
}

Cat::~Cat()
{
	delete this->_lightbulb;
	std::cout << "[ A Kitty has passed away ! ]" << std::endl;
}

void	Cat::makeSound()
{
	std::cout << "Meow ! Meow ! Meow !" << std::endl;
}

Cat&	Cat::operator=(Cat const& obj)
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

void	Cat::getThought() const
{
	std::srand(time(0));
	std::cout << this->_lightbulb->getIdeas((rand() % 100)) << std::endl;
}