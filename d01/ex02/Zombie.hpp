/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:21:31 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/09 16:54:05 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

class   Zombie
{
    public:
        Zombie(void);
        ~Zombie(void);

        std::map<std::string,std::string>   info;

        void    announce(void);
}

#endif
