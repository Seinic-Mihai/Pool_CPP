/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:21:31 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 09:40:42 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class   Zombie
{
    public:
        Zombie(void);
        ~Zombie(void);

        std::string     type;
        std::string     name;

        void    announce(void);
};

#endif
