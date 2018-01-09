/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:19:45 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/09 15:51:14 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    ponyOnTheHeap(void)
{
    Pony    *first = new Pony();

    first->print_map();
    delete first;
    return;
}

void    ponyOnTheStack(void)
{
    Pony    second;

    second.print_map();
    return;
}

int     main(void)
{
    ponyOnTheHeap();
    ponyOnTheStack();
    return (0);
}
