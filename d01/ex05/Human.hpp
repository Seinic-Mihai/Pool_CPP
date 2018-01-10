/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 10:56:08 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 11:11:31 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H
#include "Brain.hpp"

class   Human
{
    public:
        Human(void);
        ~Human(void);

        Brain const & getBrain(void);
        std::string identify(void);

        Brain const self;
};
#endif
