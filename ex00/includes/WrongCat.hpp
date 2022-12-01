/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:01:52 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/01 14:07:33 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "./WrongAnimal.hpp"

class	WrongCat;

class	WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(WrongCat const& cpy);
		~WrongCat();
		
		void	makeSound();
};