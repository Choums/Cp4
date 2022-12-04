/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:45:42 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/04 15:02:55 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->_lightbulb = new Brain();
	std::cout << "[ A new Dog has joined the zoo ! ]" << std::endl;
}


Dog::Dog(Dog const& cpy)
{
	this->_type = cpy._type;
	std::cout << "[ A " << this->_type << " copied another ! ]" << std::endl;
}

Dog::~Dog()
{
	delete this->_lightbulb;
	std::cout << "[ A Dog has passed away ! ]" << std::endl;
}

void	Dog::makeSound()
{
	std::cout << "Waouf ! Waouf ! Waouf !" << std::endl;
}

void	Dog::getThought() const
{
	std::cout << this->_lightbulb->getIdeas(rand() % 100);
}