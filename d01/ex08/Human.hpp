/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:25:56 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 16:57:47 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include <iostream>

struct t_attack;

class   Human
{
    private:
        static t_attack     attacks[];
        void                meleeAttack(std::string const & target);
        void                rangedAttack(std::string const & target);
        void                intimidatingShout(std::string const & target);
    
    public:
        Human(std::string const str);
        ~Human(void);

        std::string name;

        void        action(std::string const & action_name, std::string const & target);
};

#endif
