/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 09:51:53 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/07 09:55:14 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./AMateria.hpp"

class IMateriaSource;

class IMateriaSource {
	public:
		virtual	~IMateriaSource() {}

		virtual	void		learnMateria(AMateria *) = 0;
		virtual	AMateria*	createMateria(std::string const& type) = 0;
};