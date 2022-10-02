/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:39:02 by samajat           #+#    #+#             */
/*   Updated: 2022/10/02 12:09:35 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
#define BUREAUCRAT

//Header
#include <iostream>
#include <string>
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"


class Form;

class Bureaucrat
{
    public:
    Bureaucrat(const std::string Name, int Grade);
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat &operator=(const Bureaucrat &copy);
    const std::string &getName(void);
    int               &getGrade(void);
    void              incrementGrade(void);
    void              decrementGrade(void);
    void              signForm( Form &form);
    ~Bureaucrat();

    private:
    const std::string name;
    int              grade;
};

std::ostream& operator <<(std::ostream &COUT, Bureaucrat &b);
#endif