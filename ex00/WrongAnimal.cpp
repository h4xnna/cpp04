/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:15:42 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/23 14:49:42 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "Copy assignment operator WrongAnimal called\n";
	if(this != &other)
		this->type = other.type;
	return(*this);
}
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "Copy constructor WrongAnimal called\n";
	if(this != &other)
		*this = other;
}
WrongAnimal::WrongAnimal(std::string _type)
{
    type = _type;
    std::cout << "Parametized constructor WrongAnimal called \n";
}

WrongAnimal::~WrongAnimal()
{
   	std::cout << "Destructor WrongAnimal called\n";
}
WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
	std::cout << "Default constructor WrongAnimal called \n";
}

void  WrongAnimal::makeSound() const
{
    std::cout << type << " WRRROOONNNNGGGGG" << std::endl;
}

const std::string &WrongAnimal::getType() const
{
    return this->type;
}