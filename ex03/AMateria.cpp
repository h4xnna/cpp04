/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:02:10 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/24 15:08:36 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria(std::string const &type)
{
	std::cout << "Parametized constructor AMateria called \n";
	this->type = type;
}
AMateria::~AMateria()
{
	std::cout << "Default destructor AMateria called \n";
};
AMateria::AMateria()
{
	std::cout << "Default constructor AMateria called \n";
	type = "AMateria";
};
AMateria::AMateria(const AMateria &target)
{
	if(this != &target)
	*this = target;
};
AMateria &AMateria ::operator=(const AMateria &other)
{
	std::cout << "Copy assignment operator AMateria called\n";
	if(this != &other)
	this->type = other.type;
	return(*this);
}
//-------------------- Action ---------------------
void AMateria::use(ICharacter& target)
{
	(void)target;
};

std::string const &AMateria::getType() const
{
	return type;
}
