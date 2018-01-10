/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 09:35:39 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 09:55:34 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <ctime>

int main(void)
{
    std::cout << "Creating 2 Zombies on the STACK!" << std::endl;
    Zombie  zombie0;
    Zombie  zombie1;
    
    std::srand(std::time(0));
    zombie0.type = "easy";
    zombie0.name = "John";
    zombie1.type = "normal";
    zombie1.name = "Max";
    zombie0.announce();
    zombie1.announce();

    std::cout << "Creating 3 Zombies on the HEAP!" << std::endl;
    ZombieEvent     event;
    event.setZombieType("easy");
    Zombie* zombie2 = event.randomChump();
    event.setZombieType("normal");
    Zombie* zombie3 = event.randomChump();
    event.setZombieType("Hard");
    Zombie* zombie4 = event.randomChump();

    std::cout << "Killing Zombies on the HEAP!" << std::endl;
    delete zombie2;
    delete zombie3;
    delete zombie4;
    std::cout << "Zombies on the STACK are dying!" << std::endl;
    return (0);
}
