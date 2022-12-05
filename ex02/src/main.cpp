/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:45:48 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/05 12:44:06 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int	main(void)
{
	AAnimal *test = new Dog();
	test->makeSound();
	delete test;
	Dog	doogy = Dog();
	std::cout << doogy.getType() << std::endl;
	doogy.getThought();
	doogy.makeSound();
	return (0);
}