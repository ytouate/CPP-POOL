/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:04:02 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/19 09:39:50 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

public:
    ClapTrap(const std::string &name);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap &operator=(ClapTrap &);
    std::string &getName(void);
    unsigned int getAttackDamage(void);
    unsigned int getHitPoints(void);
    void showInfo();
    ClapTrap(ClapTrap &);
    ~ClapTrap();
};

#endif