/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:24:38 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 09:41:22 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
    return;
}

ZombieEvent::~ZombieEvent(void)
{
    return;
}

void    ZombieEvent::setZombieType(std::string new_type)
{
    zombie_type = new_type;
    return;
}

Zombie* ZombieEvent::newZombie(std::string zombie_name)
{
    Zombie*  new_zombie = new Zombie();

    new_zombie->name = zombie_name;
    new_zombie->type = zombie_type;
    return(new_zombie);
}

Zombie* ZombieEvent::randomChump(void)
{
    std::string     zombies[] = {"Zaz", "Thor", "Ol", "42", "43"};
    Zombie*         rand_zombie = newZombie(zombies[rand() % 5]);

    rand_zombie->announce();
    return(rand_zombie);
}
