/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:50:46 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/23 16:47:25 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#define red "\x1B[31m"
#define reset "\033[0m"
#define blue "\x1B[34m"
#define green "\x1B[32m"
#define yellow "\x1B[33m"
#include <string.h>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
		AMateria * inventory[4];
        std::string _name;
    public:
        Character(std::string const &name);
        Character();
        ~Character();
        Character &operator=(const Character &other);
        Character(const Character& other);
        AMateria* getMateria(int idx) const;
        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};
