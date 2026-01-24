/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:50:41 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/24 15:09:14 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"



// Character& Character::operator=(const Character &other)
// {
//     std::cout << "Copy assignment operator Character called\n";
// 	if(this != &other)
// 		this->_name = other._name;
// 	return(*this);
// }


// Character::Character()
// {
// 	std::cout << "Default constructor Character called \n";
//     _name = "Character";
// }


// Character:: Character(std::string const &name)
// {
// 	std::cout << "Parametized constructor Character called \n";
// 	int i =0;
// 	_name = name;
// 	while(i < 4)
// 	{
// 		inventory[i] = NULL;
// 		i++;
// 	}
// }
// Character:: ~Character()
// {
// 	std::cout << "Destructor Character called\n";
// 	int i = 0;
// 	while(i  < 4)
// 	{
// 		delete inventory[i];
// 		inventory[i] = NULL;
// 		i++;
// 	} 
// }
// Character:: Character(const Character& other)
// {
// 	std::cout << "Copy constructor Character called\n";
// 	int i =0;
// 	_name = other._name;
// 	while(i < 4)
// 	{
// 		if(other.inventory[i])
// 			inventory[i] = other.inventory[i]->clone();
// 		else 
// 			inventory[i] = NULL;
// 		i++;
// 	}
// }

// //--------------Actions ---------------------
// std::string const & Character::getName() const
// {
//    return(this->_name);
// }

// void Character:: equip(AMateria* m)
// {
// 	int i = 0;
// 	if(!m)
// 		return;

// 	while(i < 4)
// 	{
// 		if(inventory[i] == NULL )
// 		{
// 			inventory[i] = m;
// 			return;
// 		}
// 		i++;
// 	}
// 	std::cout << "inventory is full" << std::endl;
// }
// void Character:: unequip(int idx)
// {
// 	 if (idx < 0 || idx >= 4)
//         return;
// 	inventory[idx] = NULL;

// }
// void Character::use(int idx, ICharacter& target)
// {
//     if (idx < 0 || idx >= 4)
//         return;
//     if (inventory[idx])
//         inventory[idx]->use(target);
// }

// AMateria* Character::getMateria(int idx) const 
// {
//     if (idx < 0 || idx > 3) 
// 		return NULL;
//     return inventory[idx];
// }



Character::Character() : _name("Character")
{
	std::cout << "Default constructor Character called\n";
	int i = 0;
    while (i < 4)
	{
        inventory[i] = NULL;
		i++;
	}
	 i = 0;
    while ( i < 100)
	{
        dropped[i] = NULL;
		i++;
	}
    dropped_count = 0;
}

Character::Character(const std::string &name) : _name(name)
{
	std::cout << "Parametized constructor Character called \n";
	int i = 0;
    while ( i < 4)
	{
        inventory[i] = NULL;
		i++;
	}
	i = 0;
    while ( i < 100 )
	{
        dropped[i] = NULL;
		i++;
	}
    dropped_count = 0;
}

Character::Character(const Character &other) : _name(other._name)
{
	std::cout << "Copy constructor Character called\n";
	int i =0;
    while ( i < 4)
	{
		inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : NULL;
		i++;
	}
	i = 0;
    while ( i < other.dropped_count)
	{
        dropped[i] = other.dropped[i] ? other.dropped[i]->clone() : NULL;
		i++;
	}
    dropped_count = other.dropped_count;
}

Character &Character::operator=(const Character &other)
{
    int i;
	std::cout << "Copy assignment operator Character called\n";
    if (this != &other)
    {
        _name = other._name;

        i = 0;
        while (i < 4)
        {
            if (inventory[i])
            {
                delete inventory[i];
                inventory[i] = NULL;
            }
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
            i++;
        }
        i = 0;
        while (i < dropped_count)
        {
            if (dropped[i])
            {
                delete dropped[i];
                dropped[i] = NULL;
            }
            i++;
        }
        i = 0;
        while (i < other.dropped_count)
        {
            if (other.dropped[i])
                dropped[i] = other.dropped[i]->clone();
            else
                dropped[i] = NULL;
            i++;
        }
        dropped_count = other.dropped_count;
    }

    return *this;
}


Character::~Character()
{	
	std::cout << "Default destructor Character called\n";
	int i = 0;
    while ( i < 4)
	{
        delete inventory[i];
		i++;
	}
	i = 0;
    while ( i < dropped_count)
	{
        delete dropped[i];
		i++;
	}
}
// //--------------Actions ---------------------

std::string const &Character::getName() const
{
    return _name;
}

void Character::equip(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (!inventory[i])
        {
            inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4 || !inventory[idx])
        return;
    if (dropped_count < 100)
        dropped[dropped_count++] = inventory[idx];
    inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx >= 4 || !inventory[idx])
        return;
    inventory[idx]->use(target);
}

AMateria* Character::getMateria(int idx) const
{
    if (idx < 0 || idx >= 4)
        return NULL;
    return inventory[idx];
}
