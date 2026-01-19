/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:02:10 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/19 16:22:07 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria(std::string const &type)
{
	
}
AMateria::~AMateria()
{
	
};
AMateria::AMateria()
{
	type = "AMateria";
};
AMateria::AMateria(const AMateria &target)
{
	if(this != &target)
	*this = target;
};
AMateria::AMateria &operator=(const AMateria &other)
{
	if(this != &other)
	this->type = other.type;
	return(*this);
}
//-------------------- Action ---------------------
void AMateria::use(ICharacter& target)
{
	
};

AMateria::AMateria* clone() const
{
	
}