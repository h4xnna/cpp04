/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:16:55 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/23 15:03:01 by hmimouni         ###   ########.fr       */
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
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(std::string const &type);
		virtual ~AMateria();
		AMateria();
		AMateria(const AMateria &target);
        AMateria &operator=(const AMateria &other);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0; // Class abstraite, jamais créer directement une AMateria.
		virtual void use(ICharacter& target);
};

