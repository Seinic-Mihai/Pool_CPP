/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:52:07 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/09 15:55:55 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    memoryLeak()
{
    std::string*    panthere = new std::string("String panthere");
    
    std::cout << *panthere << std::endl;
    delete panthere;
}
