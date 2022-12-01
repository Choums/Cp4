/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:46:19 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/01 14:32:19 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class   Animal;

class   Animal {
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const& cpy);
		virtual ~Animal();

		virtual void	makeSound();

		Animal& operator=(Animal const& obj);

			/*	Accessors */
		std::string	getType() const;
	protected:
		std::string _type;
};
