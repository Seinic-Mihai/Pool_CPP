/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:35:39 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 10:41:55 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <ctime>

int main(void)
{
    std::srand(std::time(0));
    ZombieHorde     horde(10);

    horde.announce();
    return (0);
}
