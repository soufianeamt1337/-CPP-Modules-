/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:18:23 by samajat           #+#    #+#             */
/*   Updated: 2022/10/07 17:08:26 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int ft_isprint (char c)
{
    if (c >= 32 && c <= 127)
        return (true);
    return (false);
}
int ft_isdigit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

Convert::Convert(void): value("")
{
}

Convert::Convert(std::string input):value(input)
{
}

Convert::Convert(Convert const &copy)
{
}

Convert& Convert::operator=(Convert const &copy)
{
}

bool    Convert::isInt(const std::string value)
{
    for (size_t i = 0; i < value.length(); i++)
    {
        if (ft_isdigit(value[i]))
            return (false);
    }
    return (true);
}
bool    Convert::isDouble(const std::string value)
{
    int i = 0;

    while (value[i] && ft_isdigit(value[i]))
        i++;
    if (value[i] != '.')
        return (false);
    i++;
    while (value[i] && ft_isdigit(value[i]))
        i++;
    if (value[i])
        return (false);
    return (true);    
}

bool    Convert::isFloat(const std::string value)
{
    int i = 0;

    while (value[i] && ft_isdigit(value[i]))
        i++;
    if (value[i] != '.')
        return (false);
    i++;
    while (value[i] && ft_isdigit(value[i]))
        i++;
    if (value[i] != 'f' || value[i] != 'F')
        return (false);
    i++;
    if (value[i])
        return (false);
    return (true);    
}

bool    Convert::isChar(const std::string value)
{
    if (value.length() != 1)
        return (false);
    return (true);    
}

void    Convert::toInt(void)
{
    if (isChar())
        
    std::cout << "int: " << value << std::endl;
}
void    Convert::toDouble(void)
{
    std::cout << "double: " << value << std::endl;
}
void    Convert::toFloat(void)
{
    
}
void    Convert::toChar(void)
{
    
}

void Convert::displayConversions(void)
{
    //check if null
    if (value.empty())
    {
        std::cerr << "The value is null!" << std::endl;
        return;
    }
    if (value.isInt())
        
}
