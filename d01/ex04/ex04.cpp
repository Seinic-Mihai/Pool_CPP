/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 10:44:29 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 10:47:46 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string     str = "HI THIS IS BRAIN";
    std::string*    str_ptr = &str;
    std::string&    str_ref = str;

    std::cout << *str_ptr << std::endl;
    std::cout << str_ref << std::endl;
    return (0);
}
