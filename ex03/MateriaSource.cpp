/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:39:49 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/24 13:20:09 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _count(0)
{
	std::cout << "Default constructor MateriaSource called\n";
	int i = 0;
	while ( i < 4)
	{
		inventory[i] = NULL;
		i++;	
	}
}
MateriaSource::MateriaSource(const MateriaSource& other) : _count(0)
{
	int i = 0;
    while ( i < other._count)
    {
        inventory[i] = other.inventory[i]->clone();
        _count++;
		i++;
    }
}
MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	int i = 0;
    if (this != &other)
    {
        while ( i < _count)
		{
            delete inventory[i];
			i++;
		}
        _count = 0;
		i = 0;
        while ( i < other._count)
        {
            inventory[i] = other.inventory[i]->clone();
            _count++;
			i++;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "Default destructor MateriaSource called\n";
	int i = 0;
	while ( i < _count)
	{
		delete inventory[i];
		i++;
	}
}
//------ Actions  ---------------

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m || _count >= 4)
        return;
    inventory[_count++] = m->clone();
}


void MateriaSource::print_inventory()
{
	int i = 0;
	while(i < 4)
	{
		if(inventory[i])
			std::cout << "inventory["<< i<< "] = "<< inventory[i]->getType() << std::endl;
		else 
			std::cout << "inventory["<< i<< "] = empty "<< std::endl;
		i++;
	} 
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;
	while(i < 4)
	{
		if(inventory[i] && inventory[i]->getType() == type)
		{
			return inventory[i]->clone();
			
		}
		i++;
	}
	if(i >= 4)
	{
			std::cout << red << "inventory is full"<< std::endl;
	}
	// print_inventory();
	return 0;
}