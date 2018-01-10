/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:24:38 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 10:42:34 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int nb)
{
    std::string     zombies[] = {"Zaz", "Thor", "Ol", "42", "43"};

    std::cout << "Creating a zombie HORDE!!!" << std::endl;
    zombie_horde = new Zombie[nb];
    zombie_nb = nb;
    for (int i = 0; i < zombie_nb; i++)
    {
        zombie_horde[i].type = "HARD";
        zombie_horde[i].name = zombies[rand() % 5];
    }
    return;
}

ZombieHorde::~ZombieHorde(void)
{
    std::cout << "Exterminating the F*cking HORDE!!!" << std::endl;
    delete  [] zombie_horde;
    return;
}

void    ZombieHorde::announce(void)
{
    for (int i = 0; i < zombie_nb; i++)
        zombie_horde[i].announce();
    return;
}
