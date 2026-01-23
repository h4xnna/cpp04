/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:39:49 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/23 16:59:16 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int i = 0;
	while ( i < 4)
	{
		inventory[i] = NULL;
		i++;	
	}
}

MateriaSource::~MateriaSource()
{
	int i = 0;
	while ( i < 4)
	{
		delete inventory[i];
		i++;
	}
}
//------ Actions  ---------------

void MateriaSource::learnMateria(AMateria* m)
{
	int i =0;
	if (!m)
		return;

	while (i < 4)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m->clone();
			return;
		}
	}
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
	print_inventory();
	return 0;
}