/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:31:56 by ytouate           #+#    #+#             */
/*   Updated: 2022/10/05 17:16:33 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string _name, short int _signGrade, short int _excuteGrade)
    : name(_name), isSigned(false), signGrade(_signGrade), executeGrade(_excuteGrade)
{
    if (_signGrade > 150 or _excuteGrade > 150)
        throw GradeTooLowException();
    else if (_signGrade < 1 or _excuteGrade < 1)
        throw GradeTooHighException();
}

const std::string &Form::getName() const
{
    return this->name;
}

bool Form::getSigningStatus() const
{
    return isSigned;
}

short int Form::getSignGrade() const
{
    return this->signGrade;
}

short int Form::getExcuteGrade() const
{
    return this->executeGrade;
}

Form::Form(const Form &obj)
    : name(obj.getName()), isSigned(false),
      signGrade(obj.getSignGrade()),
      executeGrade(obj.getExcuteGrade())
{
    if (this->signGrade > 150 or this->executeGrade > 150)
        throw GradeTooLowException();
    else if (this->signGrade < 1 or this->executeGrade < 1)
        throw GradeTooHighException();
}

Form &Form::operator=(const Form &rhs)
{
    (void)rhs;
    return (*this);
}

void Form::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() > this->signGrade)
        throw GradeTooLowException();
    else
        this->isSigned = true;
}

std::ostream &operator<<(std::ostream &os, const Form &obj)
{
    std::string status = obj.getSigningStatus() ? "Signed" : "Not Signed";
    os << "Name:\t\t" << obj.getName()
       << "\nExcution Grade: " << obj.getExcuteGrade()
       << "\nSigning Grade:\t" << obj.getSignGrade()
       << "\nForm Status:\t" << obj.getSigningStatus()
       << " (" << status << ")";
    return os;
}

Form::~Form()
{
    return;
}