/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:27:13 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/09 15:50:01 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void)
{
    std::cout << "Constructor called" << std::endl;
    info.insert(std::pair<std::string, std::string>("name","Yo"));
    return;
}

Pony::~Pony(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

void    Pony::print_map(void)
{
    std::cout << info["name"] << std::endl;
    return;
}
