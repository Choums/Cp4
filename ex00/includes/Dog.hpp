/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:46:25 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/01 12:09:09 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Animal.hpp"

class	Dog;

class	Dog : public Animal {
	public:
		Dog(/* args */);
		Dog(Dog const& cpy);
		~Dog();

		virtual	void	makeSound();
};