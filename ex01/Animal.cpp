/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:16:01 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/06 10:16:02 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void  Animal::makeSound() const
{
    std::cout << type << " Animal" << std::endl;
}

Animal& Animal::operator=(const Animal &other)
{
    std::cout << "Copy assignment operator Animal called\n";
	if(this != &other)
		this->type = other.type;
	return(*this);
}
Animal::Animal(const Animal &other)
{
	std::cout << "Copy constructor Animal called\n";
	if(this != &other)
		*this = other;
}
Animal::Animal(std::string _type)
{
    type = _type;
    std::cout << "Parametized constructor Animal called \n";
}

Animal::~Animal()
{
   	std::cout << "Destructor Animal called\n";
}
Animal::Animal()
{
    type = "Animal";
	std::cout << "Default constructor Animal called \n";
}


const std::string &Animal::getType() const
{
    return this->type;
}