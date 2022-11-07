/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:56:56 by samajat           #+#    #+#             */
/*   Updated: 2022/11/07 15:16:18 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


void    print (int const &a)
{
    std::cout <<  a << std::endl;
}

int main ()
{
    int a[] = {1, 2, 3};
    
    iter(a, 3, print);
}
