/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:50:41 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/24 13:25:47 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"



Character& Character::operator=(const Character &other)
{
    std::cout << "Copy assignment operator Character called\n";
	if(this != &other)
		this->_name = other._name;
	return(*this);
}



Character::Character()
{
	std::cout << "Default constructor Character called \n";
    _name = "Character";
}


Character:: Character(std::string const &name)
{
	std::cout << "Parametized constructor Character called \n";
	int i =0;
	_name = name;
	while(i < 4)
	{
		inventory[i] = NULL;
		i++;
	}
}
Character:: ~Character()
{
	std::cout << "Destructor Character called\n";
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
	std::cout << "Copy constructor Character called\n";
	int i =0;
	_name = other._name;
	while(i < 4)
	{
		if(other.inventory[i])
		inventory[i] = other.inventory[i]->clone();
		else 
		inventory[i] = NULL;
		i++;
	}
}

//--------------Actions ---------------------
std::string const & Character::getName() const
{
   return(this->_name);
}

void Character:: equip(AMateria* m)
{
	int i = 0;
	if(!m)
		return;

	while(i < 4)
	{
		if(inventory[i] == NULL )
		{
			inventory[i] = m;
			return;
		}
		i++;
	}
	std::cout << "inventory is full" << std::endl;
}
void Character:: unequip(int idx)
{
	 if (idx < 0 || idx >= 4)
        return;
	inventory[idx] = NULL;

}
void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4)
        return;
    if (inventory[idx])
        inventory[idx]->use(target);
}

AMateria* Character::getMateria(int idx) const 
{
    if (idx < 0 || idx > 3) 
		return NULL;
    return inventory[idx];
}
