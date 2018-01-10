/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 14:26:07 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 15:01:07 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class   HumanA
{
    public:
        HumanA(std::string str, Weapon & type);
        ~HumanA(void);

        std::string name;
        Weapon &    weapon;

        void        attack(void);
};

#endif
