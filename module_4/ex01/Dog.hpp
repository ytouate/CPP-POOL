/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:53:07 by ytouate           #+#    #+#             */
/*   Updated: 2022/09/27 23:18:54 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "main.hpp"

class Dog : public Animal
{
private:
    Brain *brain;

public:
    Dog();
    Dog(std::string type);
    Dog(const Dog &);
    Dog &operator=(const Dog &);
    virtual Brain *getBrain(void) const;
    virtual void fillIdeas();
    void makeSound() const;
    ~Dog();
};

#endif