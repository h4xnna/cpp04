/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:39:49 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/21 15:17:16 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"

void learnMateria(AMateria*)
{
	inventory[i] = 
	
}


void print_inventory()
{
	int i = 0;
	while(inventory[i])
	{
		std::cout << "inventory["<< i<< "] = "<< inventory[i] << std:endl;
	} 
}
AMateria* createMateria(std::string const & type)
{
	int i = 0;
	while(inventory)
	{
		if(inventory[i] = type)
			return;
		else if(inventory == NULL)
		{
			inventory[i] = type; 
			break;
		}
		else if(i > 4)
		{
			std::cout << "inventory is full"<< std::endl;
		}
		i++;
	}
	print_inventory();
}