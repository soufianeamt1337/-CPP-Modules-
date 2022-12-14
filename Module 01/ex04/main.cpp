/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:32:21 by samajat           #+#    #+#             */
/*   Updated: 2022/09/26 15:20:55 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp" 

int main(int argc, char **argv)
{
    std::ofstream     rFile;
    
    if (argc != 4 || !argv[1][0] || !argv[2][0])
    {
        std::cerr << "The input don't contain the specified number of Args."<<std::endl;
        return (1);
    }
    replaceText(&rFile, argv + 1);
}