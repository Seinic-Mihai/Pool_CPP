/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:58:52 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/08 15:23:58 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void    ft_add(Contact *book)
{
    if (book[7].set == 1)
    {
        std::cout << "Error: Phone Book is full." << std::endl;
        return;
    }
    for (int i = 0; book[i].add_new() == 1; i++);
    return;
}

void    ft_search(Contact *book)
{
    int         index;
    std::string input;

    std::cout << "Index     |First Name|Last Name |Nickname  " << std::endl;
    for (int i = 0; i < 8 && book[i].set == 1; i++)
    {
        std::cout << std::setfill(' ') << std:: setw(10);
        std::cout << i + 1 << "|";
        book[i].show();
    }
    std::cout << "Enter and index: ";
    std::getline(std::cin, input);
    if (input.size() == 1 && input[0] > 48 && input[0] < 57)
    {
        index = input[0] - 49;
        book[index].show_full();
    }
    else
        std::cout << "Error: Bad index!!!" << std::endl;
    return;
}

int     main(void)
{
    Contact         book[8];
    std::string     cmd;

    while (cmd != "EXIT")
    {
        std::cout << "Enter a command: ";
        std::getline(std::cin, cmd);
        if (cmd == "ADD")
            ft_add(book);
        else if (cmd == "SEARCH")
            ft_search(book);
        else if (cmd != "" && cmd != "EXIT")
            std::cout << "Please enter a valid command (ADD, SEARCH, EXIT)" << std::endl;
    }
    return (0);
}
