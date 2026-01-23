/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:50:41 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/23 15:07:16 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string const & Character::getName() const
{
   return(this->_name);
}
Character:: Character(std::string const &name)
{
	int i =0;
	_name.getName() = name;
	while(i < 4)
	{
		inventory[i] = NULL;
		i++;
	}
}
Character:: ~Character()
{
	int i = 0;
	while(i  < 4)
	{
		delete inventory[i];
		inventory[i] = NULL;
		i++;
	} 
}
Character:: Character(const Character& other)
{
	int i =0;
	_name.getName() = other._name;
	while(i < 4)
	{
		if(other.inventory[i])
			inventory[i] = other.inventory[i]->clone;
		else 
			inventory[i] = NULL;
	}
}
void Character:: equip(AMateria* m)
{
	int i = 0;
	if(!m)
		return;
	if(inventory[i] != NULL && i <= 4)
		i++;
	else if(inventory[i] == NULL && (i <= 4 || i >= 0) )
	{
		inventory[i] = m;
	}
	else 
		std::cout << "inventory is full" << std::endl;
}
void Character:: unequip(int idx)
{
	 if (idx < 0 || idx >= 4)
        return;
	inventory[idx] = NULL

}
void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4)
        return;

    if (inventory[idx])
        inventory[idx]->use(target);
}
