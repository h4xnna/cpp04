/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:17:26 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/06 10:17:29 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


    int    main(void)
{
    const int arraySize = 3;
    const Animal *animals[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        if (i < arraySize / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << std::endl;
    std::cout << "\033[1;36m=== Animal Types ===\033[0m" << std::endl;
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << "\033[1;33mAnimal " << i << ": \033[0m" << animals[i]->getType() << std::endl;
    }

    std::cout << "\n\033[1;36m=== Animal Sounds ===\033[0m" << std::endl;
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << "\033[1;33mAnimal " << i << ": \033[0m";
        animals[i]->makeSound();
    }

    std::cout << std::endl;

    for (int i = 0; i < arraySize; i++)
    {
        delete animals[i];
    }

    Cat cat1;
    Cat cat2;
    // Animal animal;


    return (0);
}
