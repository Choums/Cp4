/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:46:22 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/05 12:07:32 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./AAnimal.hpp"
#include "./Brain.hpp"

class   Cat;

class Cat : public AAnimal {
	public:
		Cat();
		Cat(Cat const& cpy);
		virtual ~Cat();

		virtual	void	makeSound();
			/*	Assignement Operator Overload */
		Cat&	operator=(Cat const& obj);
			/*	Accessors */
		void	getThought() const;
	private:
		Brain	*_lightbulb;
};
