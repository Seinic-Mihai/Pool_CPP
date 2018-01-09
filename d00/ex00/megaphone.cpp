/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 10:20:30 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/09 14:52:12 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    ft_print_endl(char *str)
{
    std::cout << str << std::endl;
    return;
}

void    ft_print_upper(char *str)
{
    while (*str)
    {
        putchar(toupper(*str));
        str++;
    }
    return;
}

int main(int ac, char** av)
{
    int i;

    i = 1;
    if (ac > 1)
    {
        while (i < ac - 1)
        {
            ft_print_upper(av[i]);
            putchar(' ');
            i++;
        }
        ft_print_upper(av[i]);
        putchar('\n');
    }
    else
        ft_print_endl((char*)"* LOUD AND UNBEARABLE FEEDBACK NOISE *");
    return (0);
}
