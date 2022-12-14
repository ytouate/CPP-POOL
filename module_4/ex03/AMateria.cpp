/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:44:05 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/08 18:54:52 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria Default Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
    this->type = obj.type;
}

AMateria &AMateria::operator=(const IMateriaSource &rhs)
{
    (void)rhs;
    std::cout << "AMateria::operator called" << std::endl;
    return (*this);
}

AMateria &AMateria::operator=(AMateria *rhs)
{
    (void)rhs;
    std::cout << "AMateria::operator called" << std::endl;
    return (*this);
}

void AMateria::use(ICharacter &target)
{
    std::cout << this->getType()
              << ": *shoots an ice bolt at "
              << target.getName() << "*"
              << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor called" << std::endl;
}

AMateria::AMateria(std::string const &_type)
{
    this->type = _type;
}
std::string const &AMateria::getType() const
{
    return (this->type);
}
