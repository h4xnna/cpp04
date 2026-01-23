/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:26:28 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/23 16:53:14 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure:: ~Cure()
{
	std::cout << "Default destructor Cure called\n";
}
Cure::Cure() : AMateria("cure")
{
}

Cure& Cure::operator=(const Cure &other)
{
    std::cout << "Copy assignment operator Cure called\n";
	if(this != &other)
		AMateria::operator=(other);
	return(*this);
}
Cure::Cure(const Cure &other) : AMateria(other)
{
	std::cout << "Copy constructor Cure called\n";

}

//------------------------ Action -----------------

AMateria* Cure::clone() const
{
	return(new Cure(*this));
} 

void Cure ::use(ICharacter& target)
{
	std::cout << "* heals  " <<  target.getName() << "’s wounds *\n"; 
}