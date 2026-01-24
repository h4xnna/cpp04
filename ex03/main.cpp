/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:16:36 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/24 14:59:59 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#define BOLD    "\033[1m"
#define ITALIC  "\033[3m"
#define UNDERLINE "\033[4m"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"


// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }

void print_inventory(ICharacter* character) 
{
    int i = 0;
    std::cout << BOLD << yellow << character->getName() << "'s inventory:" << reset << std::endl;
    while (i < 4) 
    {
        AMateria* mat = character->getMateria(i);
        if (mat)
            std::cout << "Slot " << i << ": " << mat->getType() << std::endl;
        else
            std::cout << "Slot " << i << ": empty" << std::endl;
        i++;
    }
}

int main()
{
    std::cout << green << "\n=== SETUP SOURCE ===" << reset << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    std::cout << green << "\n=== CREATE CHARACTER ME ===" << reset << std::endl;
    ICharacter* me = new Character("me");

    std::cout << green << "\n=== FILL INVENTORY ===" << reset << std::endl;
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);

    tmp = src->createMateria("cure");
    me->equip(tmp);

    tmp = src->createMateria("ice");
    me->equip(tmp);

    tmp = src->createMateria("cure");
    me->equip(tmp);

    print_inventory(me);

    std::cout << green << "\n=== TRY OVERFILL ===" << reset << std::endl;
    tmp = src->createMateria("ice");
    if (tmp)
        delete tmp; 
    print_inventory(me);

    std::cout << green << "\n=== UNEQUIP SLOTS 1 & 3 ===" << reset << std::endl;
    me->unequip(1);
    me->unequip(3);
    print_inventory(me);

    std::cout << green << "\n=== RE-EQUIP AFTER UNEQUIP ===" << reset << std::endl;
    tmp = src->createMateria("cure");
    me->equip(tmp);

    tmp = src->createMateria("ice");
    me->equip(tmp);
    print_inventory(me);

    std::cout << green << "\n=== CREATE BOB ===" << reset << std::endl;
    ICharacter* bob = new Character("bob");

    std::cout << green << "\n=== USE ALL SLOTS ===" << reset << std::endl;
    int i = 0;
    while (i < 4)
    {
        me->use(i, *bob);
        i++;
    }

    std::cout << green << "\n=== UNEQUIP EVERYTHING ===" << reset << std::endl;
    i = 0;
    while (i < 4)
    {
        me->unequip(i);
        i++;
    }
    print_inventory(me);

    std::cout << green << "\n=== USE EMPTY INVENTORY (no crash) ===" << reset << std::endl;
    i = 0;
    while (i < 4)
    {
        me->use(i, *bob);
        i++;
    }

    std::cout << green << "\n=== CLEANUP ===" << reset << std::endl;
    delete bob;
    delete me;
    delete src;

    std::cout << red << "\n=== END PROGRAM ===" << reset << std::endl;
    return 0;
}

