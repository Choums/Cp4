/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:46:22 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/01 13:13:38 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Animal.hpp"

class   Cat;

class Cat : public Animal {
	public:
		Cat();
		Cat(Cat const& cpy);
		~Cat();

		virtual	void	makeSound();
};
