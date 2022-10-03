/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:21:58 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/03 15:33:13 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &_name)
    : Form(_name, 145, 137) {}

void ShrubberyCreationForm::beSigned(Bureaucrat &obj)
{
    Form::beSigned(obj);
}

void ShrubberyCreationForm::doWork(const std::string &target) const
{
    std::ofstream fileObj;
    std::string fileName = target + "shrubbery";
    
    fileObj.open(fileName, std::ios::out);
    if (fileObj.is_open())
        fileObj << "Some ASCII Trees" << std::endl;    
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}