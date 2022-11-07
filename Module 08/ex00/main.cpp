/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:02:58 by samajat           #+#    #+#             */
/*   Updated: 2022/11/08 00:47:03 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#define TOSEARCH 5
#define TYPE int
int main()
{
    {
    std::vector <TYPE> arr;
    arr.push_back(12);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(55);
    easyfind(arr, TOSEARCH);
    }
    {
        std::deque<TYPE> d ;
        d.push_back(12);
        d.push_back(5);
        d.push_back(3);
        d.push_back(4);
        d.push_back(55);
        easyfind(d, TOSEARCH);
    }
    {
        std::list<TYPE>l;
        l.push_back(12);
        l.push_back(5);
        l.push_back(3);
        l.push_back(4);
        l.push_back(55);
        easyfind(l, TOSEARCH);
    }
    return 0;
}