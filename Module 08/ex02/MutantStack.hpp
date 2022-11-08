/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:30:03 by samajat           #+#    #+#             */
/*   Updated: 2022/11/09 00:11:19 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>

template <class T, class container_type=std::deque<T>>
class MutantStack
{
    container_type container;
    public:
    //Conanical Form
    explicit MutantStack(const container_type& ctnr = container_type());
    MutantStack(const MutantStack& copy);
    MutantStack& operator=(const MutantStack& copy);
    ~MutantStack();

    //Data manipulation functions
    bool empty() const;
    T& top();
    const T& top() const;
    T size() const;
    void push (const T& val);
    void emplace (Args&&... args);
    void pop();
    void swap (stack& x) noexcept
};

template<class T>
MutantStack<T>::MutantStack()
{
    
}

template<class T>
MutantStack<T>::MutantStack(const MutantStack& copy)
{
    
}

template<class T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& copy)
{
    
}

template<class T>
MutantStack<T>::~MutantStack()
{
    
}

template<class T>
bool MutantStack<T>::empty() const
{
    
}
template<class T>
T& MutantStack<T>::top()
{
    
}

template<class T>
const T& MutantStack<T>::top() const
{
    
}

template<class T>
T MutantStack<T>::size() const
{
    
}

template<class T>
void MutantStack<T>::push (const T& val)
{
    
}

template<class T>
void MutantStack<T>::pop()
{
    
}

template<class T>
void MutantStack<T>::swap (stack& x) noexcept
{
    
}

template <class ... Args> 
void MutantStack<T>::emplace (Args&&... args)
{
    
}

#endif