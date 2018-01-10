/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:30:48 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 09:17:07 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "A zombie is born from death !!!!" << std::endl;
    return;
}

Zombie::~Zombie(void)
{
    std::cout << "A zombie was killed !!! Thanks GOD." << std::endl;
    return;
}

void    Zombie::announce(void)
{
    std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss..." << std::endl;
    return;
}
