/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:26:07 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 15:16:57 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class   HumanB
{
    public:
        HumanB(std::string str);
        ~HumanB(void);

        std::string name;
        Weapon*     weapon;


        void        setWeapon(Weapon & type);
        void        attack(void);
};

#endif
