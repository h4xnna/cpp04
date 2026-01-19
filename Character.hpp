/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:50:46 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/19 16:51:51 by hmimouni         ###   ########.fr       */
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

class Character : public ICharacter
{
    std::string name;
    AMateria* inventory[4];
public:
    Character(std::string const &name);
    ~Character();
    std::string const &getName() const override;
    void equip(AMateria* m) override;
    void unequip(int idx) override;
    void use(int idx, ICharacter& target) override;
};
