/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:13:01 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/19 16:02:41 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::~ICharacter() {};

ICharacter::std::string const & getName() const
{
	
}
ICharacter::void equip(AMateria* m) = 0;
ICharacter::void unequip(int idx) = 0;
ICharacter::void use(int idx, ICharacter& target) = 0;