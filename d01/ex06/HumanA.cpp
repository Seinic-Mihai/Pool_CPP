/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:33:25 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 15:06:21 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon & type): name(str), weapon(type)
{
    return ;
}

HumanA::~HumanA(void)
{
    return ;
}

void    HumanA::attack()
{
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
