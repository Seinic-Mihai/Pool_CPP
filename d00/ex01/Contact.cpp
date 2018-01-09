/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 11:28:05 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/09 14:46:45 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
    set = 0;
    return;
}

Contact::~Contact(void)
{
    return;
}

int     Contact::add_new(void)
{
    if (set == 1)
        return (1);
    set = 1;
    std::cout << "Enter first name: ";
    std::getline(std::cin, first_name); 
    std::cout << "Enter last name: ";
    std::getline(std::cin, last_name);
    std::cout << "Enter nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Enter login: ";
    std::getline(std::cin, login);
    std::cout << "Enter postal address: ";
    std::getline(std::cin, postal_address);
    std::cout << "Enter email address: ";
    std::getline(std::cin, email_address);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, phone_number);
    std::cout << "Enter birthday date: ";
    std::getline(std::cin, birthday_date);
    std::cout << "Enter favorite meal: ";
    std::getline(std::cin, favorite_meal);
    std::cout << "Enter underwear color: ";
    std::getline(std::cin, underwear_color);
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkest_secret);
    return (0);
}

void    Contact::print_trunc(std::string str)
{
    char    tmp[11];

    std::cout << std::setfill(' ') << std::setw(10);
    if (str.size() > 10)
    {
        str.copy(tmp, 9, 0);
        tmp[9] = '.';
        tmp[10] = '\0';
        std::cout << tmp;
    }
    else
        std::cout << str;
}

void    Contact::show(void)
{
    if (set == 0)
    {
        for (int i = 0; i < 3; i++)
        {
            std::cout << std::setfill(' ') << std::setw(11);
            if (i != 2)
                std::cout << "|" ;
        }
        std::cout << std::endl;
    }
    else
    {
        print_trunc(first_name);
        std::cout << "|";
        print_trunc(last_name);
        std::cout << "|";
        print_trunc(nickname);
        std::cout << std::endl;
    }
    return;
}

void    Contact::show_full(void)
{
    if (set == 0)
        std::cout << "No information for this index yet." << std::endl;
    else
    {
        std::cout << "First Name: " << first_name << std::endl;
        std::cout << "Last Name: " << last_name << std::endl;
        std::cout << "Nickname: " << nickname << std::endl;
        std::cout << "Login: " << login << std::endl;
        std::cout << "Postal Address: " << postal_address << std::endl;
        std::cout << "Email Address: " << email_address << std::endl;
        std::cout << "Phone Number: " << phone_number << std::endl;
        std::cout << "Birthday Date: " << birthday_date << std::endl;
        std::cout << "Favorite Meal: " << favorite_meal << std::endl;
        std::cout << "Underwear Color: " << underwear_color << std::endl;
        std::cout << "Darkest Secret: " << darkest_secret << std::endl;
    }
    return;
}
