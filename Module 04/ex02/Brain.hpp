/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:51:26 by samajat           #+#    #+#             */
/*   Updated: 2022/10/30 14:23:49 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN
#define BRAIN

//includes
#include<iostream>
#include <string>

class Brain
{
private:
    std::string idea[100];

public:
    Brain(void);
    Brain(const Brain &copy);
    Brain& operator=(const Brain &copy);
    virtual ~Brain();
};

#endif