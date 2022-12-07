/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:14:18 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/07 12:20:43 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define RED		"\033[1;31m"
#define GREEN	"\033[1;32m"
#define END		"\033[0m"

#include <iostream>
#include "./ICharacter.hpp"

class ICharacter;

class AMateria {
	public:
			/*  Constructors/Destructor */
		AMateria(std::string const& type);
		AMateria(AMateria const& cpy);
		virtual ~AMateria();
		
			/*  Methods */
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target) = 0;

			/*  Assignment Operator Overload */
		AMateria&	operator=(AMateria const& obj);
			/*  Accessors */
		std::string const&	getType() const;

	protected:
		std::string	_type;
};