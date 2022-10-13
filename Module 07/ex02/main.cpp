/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:26:10 by samajat           #+#    #+#             */
/*   Updated: 2022/10/13 13:15:58 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<class T>
Array<T>::Array()
{
    arr = new T();
}

template<class T>
Array<T>::Array(unsigned int l) :len(l)
{
    arr = new T[len];
}

template<class T>
Array<T>::Array(Array &copy)
{
    for (size_t i = 0; i < len; i++)
        this->arr[i] = copy.arr[i];
}

template<class T>
Array<T>& Array<T>::operator=(Array &copy)
{
    for (size_t i = 0; i < len; i++)
        this->arr[i] = copy.arr[i];
    return (*this);
}

template<class T>
unsigned int Array<T>::size()
{
    return (len);
}

template<class T>
T& Array<T>::operator[](unsigned int i)
{
    if (len - 1 < i)
        throw std::exception ();
    return (arr[i]);
}

template<class T>
Array<T>::~Array()
{
    delete [] arr;
}

int main ()
{
    Array<int>arr(2);
    arr[0] = 45;
    std::cout << arr.size() <<std::endl;
    std::cout << arr[0] <<std::endl;
}