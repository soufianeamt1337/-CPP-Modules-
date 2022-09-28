/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:43:10 by samajat           #+#    #+#             */
/*   Updated: 2022/09/25 19:56:39 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//: ClapTrap(n, 100, 50, 20){}
ScavTrap::ScavTrap (std::string n):ClapTrap(n, 100, 50, 20)
{
    std::cout << "ScavTrap " << name << " default constructor is called!" << std::endl;
}


//testing assignemnent
ScavTrap::ScavTrap(ScavTrap &copy):ClapTrap(copy.name, 100, 50, 20)
{
    this->name = copy.name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
    std::cout << this->name <<" "<< this->hitPoints<<" "<< this->energyPoints << " "<<this->attackDamage<<"\n";
    std::cout << "ScavTrap " << name << "is copied!" << std::endl;
}

void ScavTrap::ft_swap(ScavTrap &a, ScavTrap &b)
{
    ScavTrap temp = b;

    std::swap(a.name, temp.name);
    std::swap(a.hitPoints, temp.hitPoints);
    std::swap(a.energyPoints, temp.energyPoints);
    std::swap(a.attackDamage, temp.attackDamage);
}

ScavTrap& ScavTrap::operator=(ScavTrap &copy)
{
    std::cout << "Entered\n";
    ft_swap(*this, copy);
    return (*this);
}

void ScavTrap::attack (const std::string& target)
{
    if (!energyPoints)
    {
        std::cout << "ScavTrap "<< name << "has no energy!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "ScavTrap "<< name <<" attacks "<< target <<", causing "<< attackDamage <<" points of damage!" << std::endl;
}


void ScavTrap::takeDamage(unsigned int amount)
{
    if(amount <= hitPoints)
    {
        hitPoints -= amount;
    }
    else
    {
        hitPoints  = 0;
    }
    std::cout << "ScavTrap "<< name <<" has been attacked , getting "<< amount <<" points of damage!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (!energyPoints)
    {
        std::cout << "ScavTrap "<< name << "has no energy!" << std::endl;
        return;
    }
    energyPoints--;
    if(100 - hitPoints >= amount)
        hitPoints += amount;
    else
        hitPoints  = 100;
    std::cout << "ScavTrap "<< name <<" has repaired itself, by "<< amount <<" points !" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
ScavTrap::~ScavTrap (void)
{
    std::cout << "ScavTrap " << name << " is dead!" << std::endl;     
}