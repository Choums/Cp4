/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 12:48:19 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/05 11:23:54 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
	srand(time(0));
	std::string	ideas[] = { "Eat",
							"Sleep",
							"Play",
							"More eat"};
	for (size_t i(0); i < 100; i++)
		this->_ideas[i] = ideas[rand() % 4];
	std::cout << "[ A Synaptogenesis took place ! ]" << std::endl;
}

Brain::Brain(Brain const& cpy)
{
	for (size_t i(0); i < 100;i++)
		this->_ideas[i] = cpy._ideas[i];
	std::cout << "[ A Brain has been copied ! ]" << std::endl;
}

Brain::~Brain()
{
	std::cout << "[ Not so much eureka now ! ]" << std::endl;
}

Brain&	Brain::operator=(Brain const& obj)
{
	if (this != &obj)
		for (size_t i(0); i < 100;i++)
			this->_ideas[i] = obj._ideas[i];	
	return (*this);
}

std::string	const& Brain::getIdeas(int index) const
{
	return (this->_ideas[index]);
}