/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:46:25 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/05 12:07:34 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./AAnimal.hpp"
#include "./Brain.hpp"

class	Dog;

class	Dog : public AAnimal {
	public:
		Dog();
		Dog(Dog const& cpy);
		virtual ~Dog();

		virtual	void	makeSound();

		Dog&	operator=(Dog const& obj);
		
		void	getThought() const;
	private:
		Brain	*_lightbulb;
};