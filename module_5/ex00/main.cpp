/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:46:37 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/02 21:25:14 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("name 1: ", 3);
    Bureaucrat b("name 2: ", 149);
    Bureaucrat c("name 2: ", 1);
    a++;
    b--;
    try
    {
        b--;
    }
    catch (std::exception)
    {
        std::cout << "Exception Handeled" << std::endl;
    }
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
}