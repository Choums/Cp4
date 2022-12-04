/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 12:46:18 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/04 16:06:17 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>

class Brain;

class Brain {
	public:
			/*	Constructors/Destructor */
		Brain();
		Brain(Brain const& cpy);
		virtual ~Brain();

			/*	Assignement Operator Overload */
		Brain&	operator=(Brain const& obj);

			/*	Accessors */
		std::string const&	getIdeas(int index) const;
	private:
		std::string _ideas[100];
};