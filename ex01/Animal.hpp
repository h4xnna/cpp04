

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
#include "Brain.hpp"

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