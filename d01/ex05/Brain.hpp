/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 10:49:36 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 11:09:51 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
#include <iostream>
#include <sstream>

class   Brain
{
    public:
        Brain(void);
        ~Brain(void);

        std::string identify(void) const;
};
#endif
