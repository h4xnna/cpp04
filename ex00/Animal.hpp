/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:15:13 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/06 10:15:15 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <string.h>
#include <iostream>
#define red "\x1B[31m"
#define reset "\033[0m"
#define blue "\x1B[34m"
#define green "\x1B[32m"
#define yellow "\x1B[33m"
#include <string.h>
#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
       virtual void makeSound() const;
       Animal &operator=(const Animal &other);
		Animal(const Animal &other);
		Animal(std::string _type);
        virtual ~Animal();
		Animal();
        const std::string &getType() const;
};