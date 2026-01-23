/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:16:36 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/23 16:50:18 by hmimouni         ###   ########.fr       */
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


// void print_inventory(ICharacter* character) {
//     std::cout << BOLD << yellow << character->getName() << "'s inventory:" << reset << std::endl;
//     for (int i = 0; i < 4; ++i) {
//         AMateria* mat = character->getMateria(i); // ou équivalent selon ton code
//         if (mat)
//             std::cout << "Slot " << i << ": " << mat->getType() << std::endl;
//         else
//             std::cout << "Slot " << i << ": empty" << std::endl;
//     }
// }


int main()
{
    std::cout << green << "--- Création de la source de materia ---" << reset << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    std::cout << green << "--- Création du personnage 'me' ---" << reset << std::endl;
    ICharacter* me = new Character("me");

    std::cout << green << "--- Création et équipement des materias ---" << reset << std::endl;
    AMateria* tmp;
    tmp = src->createMateria("ice");
    if (tmp) me->equip(tmp);

    tmp = src->createMateria("cure");
    if (tmp) me->equip(tmp);

    std::cout << green << "--- Création du personnage 'bob' ---" << reset << std::endl;
    ICharacter* bob = new Character("bob");

    std::cout << green << "--- Utilisation des materias ---" << reset << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);
	//print_inventory(me);

    std::cout << green << "--- Nettoyage de la mémoire ---"<< reset << std::endl;
    delete bob;
    delete me;
    delete src;

    std::cout <<red <<  "--- Fin du programme ---" << reset << std::endl;
    return 0;
}
