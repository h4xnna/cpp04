/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:23:00 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/19 16:01:35 by hmimouni         ###   ########.fr       */
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

class Cure: virtual public AMateria
{
	public:
		~Cure();
		Cure();
		Cure(const Cure &target);
        Cure &operator=(const Cure &other);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};