/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:05:07 by samajat           #+#    #+#             */
/*   Updated: 2022/11/03 15:53:50 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string Name, int Grade): name(Name)
{
    if (Name == "")
        throw std::invalid_argument("Empty Bureacrat error!\n");
    if (Grade < 1)
        throw GradeTooHighException("Very high grade Error!");
    else if (Grade > 150)
        throw GradeTooLowException("Very low grade Error!");
    grade = Grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): name(copy.name), grade(copy.grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
    this->grade = copy.grade;
    return (*this);
}

std::ostream& operator <<(std::ostream &COUT,  Bureaucrat &b)
{
    COUT << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
    return (COUT);
}

const std::string& Bureaucrat::getName(void)
{
    return (name);
}

const int&  Bureaucrat::getGrade(void)
{
    return (grade);
}

void  Bureaucrat::incrementGrade(void)
{
    if (grade == 1)
        throw GradeTooHighException("Very high grade Error!");
    grade--;
}
void  Bureaucrat::decrementGrade(void)
{
    if (grade == 150)
        throw GradeTooLowException("Very low grade Error!");
    grade++;
}

Bureaucrat::GradeTooLowException::GradeTooLowException (const char* message): message(message){}

const char*    Bureaucrat::GradeTooLowException::what()const throw ()
{
    return message;
}
Bureaucrat::GradeTooHighException::GradeTooHighException (const char* message): message(message){}

const char    *Bureaucrat::GradeTooHighException::what() const throw ()
{
    return message;
}
Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat Destructor called\n";
}

