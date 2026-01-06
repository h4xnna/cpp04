/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:15:19 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/06 10:15:20 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Defaul constructor Cat called\n";

}

Cat::~Cat()
{
     std::cout << "Destructor Cat called\n";
}

Cat::Cat(std::string _type)
{
    type = _type;
	std::cout << "Parametized constructor Cat called \n";
}

Cat& Cat::operator=(const Cat &other)
{

	std::cout << "Copy assignment operator Cat called\n";
	if(this != &other)
		this->type = other.type;
	return(*this);
}

Cat::Cat(const Cat &other):Animal(other)
{
	std::cout << "Copy constructor Cat called\n";
	if(this != &other)
		*this = other;
}


void  Cat::makeSound() const
{
    std::cout << type << " miaou" << std::endl;
}