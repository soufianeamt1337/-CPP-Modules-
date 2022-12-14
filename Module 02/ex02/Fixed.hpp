/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:20:09 by samajat           #+#    #+#             */
/*   Updated: 2022/09/19 16:41:02 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

//Headers
#include <iostream>
#include <cmath>
//Class

class Fixed
{
private:
    static const int fractBits;
    int              raw;

public :

    Fixed   (void);
    Fixed   (const Fixed &copy);
    Fixed   (const float f);
    Fixed   (const int n);
    
    Fixed   &operator =(const Fixed &fixed);
    bool    operator<(const Fixed &f) const;
    bool    operator>(const Fixed &f) const;
    bool    operator!=(const Fixed &f) const;
    bool    operator<=(const Fixed &f) const;
    bool    operator>=(const Fixed &f) const;
    bool    operator==(const Fixed &f) const;
    Fixed   operator+(const Fixed &f);
    Fixed   operator-(const Fixed &f);
    Fixed   operator*(const Fixed &f);
    Fixed   operator/(const Fixed &f);
    Fixed   operator++();
    Fixed   operator++(int);
    Fixed   operator--();
    Fixed   operator--(int);

    int     getRawBits(void) const;
    void    setRawBits( int const raw );
    int     getFractBits(void) const ;

    float   toFloat( void ) const;
    int     toInt( void ) const;
    
    static  Fixed& min(Fixed &f1, Fixed &f2);
    static  const Fixed& min(const Fixed &f1, const Fixed &f2);
    static  Fixed& max(Fixed &f1, Fixed &f2);
    static  const Fixed& max(const Fixed &f1, const Fixed &f2);
    ~Fixed(void);
    
};
//Adding an overloading function to take care of the case if the paramerter 2 is of Fixed type 
std::ostream& operator <<(std::ostream &COUT, const Fixed &fixed);

#endif

