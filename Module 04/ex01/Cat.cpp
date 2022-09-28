/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:07:38 by samajat           #+#    #+#             */
/*   Updated: 2022/09/28 11:10:51 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    brain = new Brain();
    std::cout << "Cat constructor is called" << std::endl;
}

Cat::Cat  (Cat &copy)
{
    std::cout << "Cat Copy constructor is called" << std::endl;
    this->type = copy.type;
}

Cat& Cat::operator=(Cat &copy)
{
    this->type = copy.type;
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "**MyaW**" << std::endl;
}

Cat::~Cat(void)
{
    delete brain;
    std::cout << "Cat is destroyed!" << std::endl;
}