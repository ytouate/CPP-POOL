/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:06:55 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/03 15:50:53 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **av) {
    if (ac != 4)
    {
        std::cout
        << "Usage: [file name] [string to be replaced] [string to replace with]"
        << std::endl;
        return (1);
    }
    else {
        Sed sed(av[1], av[2], av[3]);
        sed.replace();
    }
}