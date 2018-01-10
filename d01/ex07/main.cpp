/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:20:37 by mseinic           #+#    #+#             */
/*   Updated: 2018/01/10 16:24:17 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string     up(std::string str)
{
    std::string ret;

    for (size_t i = 0; i < str.size(); i++)
        ret += toupper(str[i]);
    return (ret);
}

void            rep(char **av)
{
    std::ifstream   old_file;
    std::ofstream   new_file;
    std::string     filename;
    std::string     word1;
    std::string     word2;
    std::string     buff;
    size_t          word1_start;
    size_t          word2_len;

    filename = av[1];
    old_file.open(filename, std::ios::in);

    if (old_file.is_open() && new_file.is_open())
    {
        new_file.open(up(filename) + ".replace", std::ios::out | std::ios::trunc);
        if (new_file.is_open()) {  
            word1 = av[2];
            word2 = av[3];
            word2_len = word2.size();
            while (std::getline(old_file, buff))
            {
                word1_start = 0;
                while ((word1_start = buff.find(word1, word1_start)) != std::string::npos)
                    buff.replace(word1_start, word2_len, word2);
                new_file << buff << std::endl;

            }
            new_file.close();
        }
        old_file.close();
    }
    else
        std::cout << "Error: can't open file!" << std::endl;
    return;
}

int             main(int ac, char ** av)
{
    if (ac != 4)
    {
        std::cout << "Wrong format!!! Please enter : \" <Filename> str1 str2 \" as arguments." << std::endl;
    }
    else
        rep(av);
    return (0);
}
