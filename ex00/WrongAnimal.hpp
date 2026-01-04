
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


class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &other);
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal(std::string _type);
        void makeSound() const;
        const std::string &getType() const;
};