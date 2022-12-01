/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:27:23 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/01 14:33:11 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal;

class	WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const& cpy);
		virtual ~WrongAnimal();

		void	makeSound();

		WrongAnimal&	operator=(WrongAnimal const& obj);
		std::string		getType() const;
	protected:
		std::string	_type;
};