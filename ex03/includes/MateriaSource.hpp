/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 09:55:22 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/07 10:27:25 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource;

class MateriaSource : public IMateriaSource {
	public:
			/*	Constructors/Destructor */
		MateriaSource();
		MateriaSource(MateriaSource const& cpy);
		virtual ~MateriaSource();

			/*	Methods */
		void		learnMateria(AMateria *m);
		AMateria*	createMateria(std::string const& type);

			/*	Assignment Operator Overload */
		MateriaSource&	operator=(MateriaSource const& obj);
	private:
		AMateria*	_items[4];
};