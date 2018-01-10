/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 10:59:48 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 11:11:30 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
    return;
}

Human::~Human(void)
{
    return;
}

Brain const & Human::getBrain(void)
{
    return (self);
}

std::string Human::identify(void)
{
    return (self.identify());
}
