/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:12:42 by samajat           #+#    #+#             */
/*   Updated: 2022/09/20 19:22:22 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    // Fixed a;
    // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    // Fixed o = 2.5f;
    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << Fixed::max( a, b ) << std::endl;
    // int i = 1;
    // while (1)
    // {
    // a = 1122.459f;
    Fixed a(100);
    Fixed b(5);
    std::cout << a-- << std::endl;
    std::cout << --a << std::endl;
    //     std::cout << (a) << std::endl;
    // while(a > 0)
    // {
    //     a = a + 100;
    //     std::cout << (a) << std::endl;
    // }
    // std::cout  << a.getRawBits() << std::endl;
    return 0;
}