/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:15:37 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/06 10:15:38 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    std::cout << red << "\n------Wrong Animal-----\n" << reset << std::endl;

    const WrongAnimal* Wrong_Meta = new WrongAnimal();
    const Animal* Wrong_j = new Dog();
    const WrongAnimal* Wrong_i = new WrongCat();
    std::cout << Wrong_j->getType() << " " << std::endl;
    std::cout << Wrong_i->getType() << " " << std::endl;
    Wrong_i->makeSound(); //wWrong_ill output the cat sound!
    Wrong_j->makeSound();
    Wrong_Meta->makeSound();
    delete Wrong_Meta;
    delete Wrong_j;
    delete Wrong_i;

    return 0;
}