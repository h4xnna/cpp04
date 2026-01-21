/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:08:38 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/21 14:27:07 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#define red "\x1B[31m"
#define reset "\033[0m"
#define blue "\x1B[34m"
#define green "\x1B[32m"
#define yellow "\x1B[33m"
#include <string.h>
#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};
