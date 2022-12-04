/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:46:22 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/04 16:30:14 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Animal.hpp"
#include "./Brain.hpp"

class   Cat;

class Cat : public Animal {
	public:
		Cat();
		Cat(Cat const& cpy);
		virtual ~Cat();

		virtual	void	makeSound();
			/*	Accessors */
		void	getThought() const;
	private:
		Brain	*_lightbulb;
};
