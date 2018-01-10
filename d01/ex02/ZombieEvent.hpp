/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:17:15 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 09:41:02 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

#include "Zombie.hpp"

class   ZombieEvent
{
    public:
        ZombieEvent(void);
        ~ZombieEvent(void);

        std::string zombie_type;

        void    setZombieType(std::string new_type);
        Zombie* newZombie(std::string name);
        Zombie* randomChump(void);
};

#endif
