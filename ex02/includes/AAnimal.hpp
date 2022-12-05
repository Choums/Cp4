/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:46:19 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/05 11:41:48 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class   AAnimal;

class   AAnimal {
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(AAnimal const& cpy);
		virtual ~AAnimal();

		virtual void	makeSound() = 0;

		AAnimal& operator=(AAnimal const& obj);

			/*	Accessors */
		std::string	getType() const;
	protected:
		std::string _type;
};
