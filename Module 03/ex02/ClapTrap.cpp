/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:46:29 by samajat           #+#    #+#             */
/*   Updated: 2022/10/19 20:33:45 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap (std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " is created!1" << std::endl;
}

ClapTrap::ClapTrap (std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage):name(name),hitPoints(hitPoints), energyPoints(energyPoints), attackDamage(attackDamage)
{
        std::cout << "ClapTrap " << name << " is created!2" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy):name(copy.name), hitPoints(copy.hitPoints), energyPoints(copy.energyPoints), attackDamage(copy.attackDamage)
{
    std::cout << "Copy constructor is called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
{
    this->name          = copy.name;
    this->hitPoints     = copy.hitPoints;
    this->energyPoints  = copy.energyPoints;
    this->attackDamage  = copy.attackDamage;
    return (*this);
}

void ClapTrap::attack (const std::string& target)
{
    if (!energyPoints)
    {
        std::cout << "ClapTrap "<< name << " has no energy!" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "ClapTrap "<< name <<" attacks "<< target <<" , causing "<< attackDamage <<" points of damage!" << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
    unsigned int lostP = 0;
    if(amount <= hitPoints)
    {
        hitPoints -= amount;
        lostP += amount;
    }
    else
    {
        lostP = hitPoints;
        hitPoints  = 0;
    }
    std::cout << "ClapTrap "<< name <<" has been attacked , getting "<< lostP <<" points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    unsigned int repairation = 0;
    if (!energyPoints)
    {
        std::cout << "ClapTrap "<< name << " has no energy!" << std::endl;
        return;
    }
    energyPoints--;
    if(10 - hitPoints >= amount)
    {
        hitPoints += amount;
        repairation += amount;
    }
    else
    {
        repairation = 10 - hitPoints;
        hitPoints  = 10;
    }
    std::cout << "ClapTrap "<< name <<" has repaired itself, by "<< repairation <<" points !" << std::endl;
}


ClapTrap::~ClapTrap (void)
{
    std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;     
}