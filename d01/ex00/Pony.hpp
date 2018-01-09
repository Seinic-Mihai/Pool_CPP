/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:18:19 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/09 15:50:03 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <iostream>
#include <map>

class   Pony{
    public:
        Pony(void);
        ~Pony(void);

        std::map<std::string,std::string>   info;

        void    print_map(void);
};

#endif
