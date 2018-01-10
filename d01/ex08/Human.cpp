/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:27:15 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 16:57:48 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

struct t_attack
{
    std::string type;
    void        (Human::*f)(std::string const &);
};

t_attack    Human::attacks[] = {
    {"meleeAttack", &Human::meleeAttack},
    {"rangedAttack", &Human::rangedAttack},
    {"intimidatingShout", &Human::intimidatingShout}
};

Human::Human(std::string const str):name(str){return;}

Human::~Human(void){return;}

void    Human::meleeAttack(std::string const & target)
{
    std::cout << name << " is attacking " << target << ". (Attack: melee)" << std::endl;
    return;
}

void    Human::rangedAttack(std::string const & target)
{
    std::cout << name << " is attacking " << target << ". (Attack: ranged)" << std::endl;
    return;
}

void    Human::intimidatingShout(std::string const & target)
{
    std::cout << name << " is intimidating " << target << std::endl;
    return;
}

void    Human::action(std::string const & action_name, std::string const & target)
{
    for (int i = 0; i < 5; i++)
    {
        if (action_name == attacks[i].type)
        {
            (this->*attacks[i].f)(target);
            break;
        }
    }
}
