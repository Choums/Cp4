/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:26:02 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/07 12:14:00 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./AMateria.hpp"
#include "./ICharacter.hpp"

class Cure;

class Cure : public AMateria {
	public:
			/*  Constructors/Destructor */
		Cure();
		Cure(Cure const& cpy);
		virtual ~Cure();
		
			/*  Methods */
		virtual AMateria*	clone() const;
        virtual void        use(ICharacter& target);
	
		/*  Assignment Operator Overload */
		Cure&	operator=(Cure const& obj);
};