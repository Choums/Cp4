/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:25:55 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/07 12:13:17 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./AMateria.hpp"
#include "./ICharacter.hpp"

class Ice;

class Ice : public AMateria {
	public:
			/*  Constructors/Destructor */
		Ice();
		Ice(Ice const& cpy);
		virtual ~Ice();
		
			/*  Methods */
		virtual AMateria*	clone() const;
        virtual void        use(ICharacter& target);
		
			/*  Assignment Operator Overload */
		Ice&	operator=(Ice const& obj);
};