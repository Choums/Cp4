/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:45:48 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/04 18:30:45 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int	main(void)
{
	Animal*	j = new Cat();
	std::cout << "-----" << std::endl;
	std::cout << "+++ Basic +++" << std::endl;
	((Cat *)j)->getThought();
	std::cout << "-----" << std::endl;
	delete j;//should not create a leak
	std::cout << "-----" << std::endl << std::endl;
	std::cout << "+++ Tabs +++" << std::endl;
	Animal*	animaux[6];
	for (int i(0); i < 6; i++)
	{
		if (i < 3)
			animaux[i] = new Dog();
		else animaux[i] = new Cat();
	}
	std::cout << "-----" << std::endl;
	for (int i(0); i < 6; i++)
	{
		if (i < 3)
			((Dog *)animaux[i])->getThought();
		else
			((Cat *)animaux[i])->getThought();
	}
	std::cout << "-----" << std::endl;
	std::cout << "+++ Copy +++" << std::endl;
	Dog cpy = Dog(*(Dog *)animaux[1]);
	cpy.getThought();
	std::cout << "-----" << std::endl;
	std::cout << "+++ Assignement +++" << std::endl;
	Dog doggy = cpy;
	std::cout << doggy.getType() << std::endl;
	doggy.getThought();
	std::cout << "-----" << std::endl;
	for (int i(0);i < 6; i++)
		delete animaux[i];
	return (0);
}