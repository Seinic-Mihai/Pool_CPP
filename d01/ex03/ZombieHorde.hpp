/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:17:15 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 10:41:30 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include "Zombie.hpp"

class   ZombieHorde
{
    public:
        ZombieHorde(int nb);
        ~ZombieHorde(void);

        Zombie* zombie_horde;
        int     zombie_nb;

        void    announce(void);
};

#endif
