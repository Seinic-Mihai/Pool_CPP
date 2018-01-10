/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:21:30 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 15:09:15 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
    type = "Null";
    return;
}

Weapon::Weapon(std::string str_type)
{
    type = str_type;
    return;
}

Weapon::~Weapon(void)
{
    return;
}

std::string const & Weapon::getType(void)
{
    return (type);
}

void    Weapon::setType(std::string str_type)
{
    type = str_type;
}
