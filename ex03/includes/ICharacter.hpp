/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:27:44 by chaidel           #+#    #+#             */
/*   Updated: 2022/12/05 15:29:26 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class ICharacter;

class ICharacter {
    public:
        virtual ~ICharacter() {};
        
            /*  Methods */
        virtual void    equip(AMateria *m) = 0;
        virtual void    unequip(int idx) = 0;
        virtual void    use(int idx, ICharacter& target) = 0;

            /*  Accessors */
        virtual std::string const& getName() const = 0;
};