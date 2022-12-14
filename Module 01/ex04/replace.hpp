/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samajat <samajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:59:21 by samajat           #+#    #+#             */
/*   Updated: 2022/09/26 14:40:55 by samajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
#define FILE_HPP

//Headers
#include <iostream>
#include <fstream>
#include <string>

//funcs
void    createAReFile(std::string file, std::ofstream *rFile);
void    replaceText(std::ofstream *rFile,  char **parm);

#endif