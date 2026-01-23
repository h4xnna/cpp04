/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:40:28 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/23 15:25:55 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


Ice:: ~Ice()
{
	
}
Ice::Ice() : AMateria("ice")
{

}

Ice& Ice::operator=(const Ice &other)
{
    std::cout << "Copy assignment operator Ice called\n";
	if(this != &other)
		this->type = other.type;
	return(*this);
}
Ice::Ice(const Ice &other) : AMateria(other)
{
	std::cout << "Copy constructor Ice called\n";

}

//-----------------Action ---------------------


AMateria* Ice::clone() const
{
	return(new Ice(*this));
} 

void Ice ::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n"; 
}
