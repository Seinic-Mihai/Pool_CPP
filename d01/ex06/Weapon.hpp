/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:15:31 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 14:43:13 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
#include <iostream>

class Weapon
{
    public:
        Weapon(void);
        Weapon(std::string str_type);
        ~Weapon(void);

        std::string         type;
        std::string const & getType(void);
        void                setType(std::string str_type);
};

#endif
