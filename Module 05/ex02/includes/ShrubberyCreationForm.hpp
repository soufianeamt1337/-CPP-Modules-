/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:10:38 by samajat           #+#    #+#             */
/*   Updated: 2022/11/03 16:17:36 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

#include "Form.hpp"
#include <iostream>
#include <fstream>
#include <string>

class ShrubberyCreationForm : public Form
{
public:
    typedef ShrubberyCreationForm Shrubbery;
    ShrubberyCreationForm(const std::string target = "");
    ShrubberyCreationForm(const Shrubbery &obj);
    ShrubberyCreationForm &operator=(const Shrubbery &target);
    ~ShrubberyCreationForm();
    void formAction(void)const;
    const std::string&    getName(void) const;

private:
    std::string generateTree(void)const;
    std::string target;
};



#endif