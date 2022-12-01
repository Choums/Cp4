/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:02:28 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/01 14:08:03 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "[ A new WrongCat has joined the zoo ! ]" << std::endl;
}

WrongCat::WrongCat(WrongCat const& cpy)
{
	this->_type = cpy._type;
	std::cout << "[ A " << this->_type << " copied another ! ]" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "[ A WrongCat has passed away ! ]" << std::endl;
}

void	WrongCat::makeSound()
{
	std::cout << "Psss ! Psss ! Psss !" << std::endl;
}