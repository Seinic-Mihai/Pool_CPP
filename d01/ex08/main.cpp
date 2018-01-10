/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:52:20 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 16:57:51 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
    Human   zaz("Zaz");
    Human   thor("Thor");
    Human   ol("Ol");

    zaz.action("meleeAttack", thor.name);
    zaz.action("rangedAttack", thor.name);
    zaz.action("intimidatingShout", thor.name);
 
    thor.action("meleeAttack", zaz.name);
    thor.action("rangedAttack", zaz.name);
    thor.action("intimidatingShout", zaz.name);

    ol.action("intimidatingShout", zaz.name);
    ol.action("intimidatingShout", thor.name);
    std::cout << "Ol wins!!!" << std::endl;
    return (0);
}
