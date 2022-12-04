/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:45:45 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/04 14:57:54 by chaidel          ###   ########.fr       */
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
	this->_type = cpy._type;
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

void	Cat::getThought() const
{
	std::cout << this->_lightbulb->getIdeas(rand() % 100);
}