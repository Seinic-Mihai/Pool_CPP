/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 10:52:38 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 11:11:28 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    return;
}

Brain::~Brain(void)
{
    return;
}

std::string Brain::identify() const
{
    std::stringstream   str;

    str << this;
    return (str.str());
}
