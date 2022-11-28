/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:46:19 by chaidel           #+#    #+#             */
/*   Updated: 2022/11/28 15:56:01 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class   Animal;

class   Animal {
	public:
		Animal();
		Animal(Animal const& cpy);
		~Animal();

		Animal& operator=(Animal const& obj);

	protected:
		std::string type;
};

std::ostream&   operator<<(std::ostream& flux, Animal const& animal);