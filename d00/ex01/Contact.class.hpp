/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 11:24:38 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/08 15:23:57 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <iomanip>

class   Contact {
    public:
        int            set;
        std::string    first_name;
        std::string    last_name;
        std::string    nickname;
        std::string    login;
        std::string    postal_address;
        std::string    email_address;
        std::string    phone_number;
        std::string    birthday_date;
        std::string    favorite_meal;
        std::string    underwear_color;
        std::string    darkest_secret;

        Contact(void);
        ~Contact(void);

        int     add_new(void);
        void    show(void);
        void    show_full(void);
        void    print_trunc(std::string str);
};
#endif
