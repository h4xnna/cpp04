/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:17:02 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/06 10:17:03 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Defaul constructor Cat called\n";
	brain = new Brain();
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Destructor Cat called\n";
	delete brain;
}

Cat::Cat(std::string _type)
{
	std::cout << "Parametized constructor Cat called \n";
	type = _type;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Copy assignment operator Cat called\n";
	if(this != &other)
	{
		delete brain;
		this->type = other.type;
		brain = new Brain(*other.brain);
	}
	return(*this);
}

Cat::Cat(const Cat &other):Animal(other)
{
	std::cout << "Copy constructor Cat called\n";
	if(this != &other)
	{
		this->type = other.type;
		brain = new Brain(*other.brain);
	}
}

void  Cat::makeSound() const
{
    std::cout << type << " MEOW!" << std::endl;
}