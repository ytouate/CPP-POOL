/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:04:53 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/29 18:07:11 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    AMateria *slots[4];
    std::string name;
public:
    Character(std::string const &);
    Character &operator=(const Character &);
    std::string const & getName() const;
    AMateria * getMateria(int idx) const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
    Character(const Character &);
    ~Character();
};

#endif