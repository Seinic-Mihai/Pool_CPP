/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:33:25 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 15:16:55 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str): name(str), weapon(NULL)
{
    return ;
}

HumanB::~HumanB(void)
{
    return;
}

void    HumanB::setWeapon(Weapon & type)
{
    weapon = &type;
    return;
}

void    HumanB::attack()
{
    if (weapon)
    {
        std::cout << name << " attacks with his " << weapon->getType() << std::endl;
    }
    return;
}
