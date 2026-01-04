#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    	std::cout << "Default constructor Dog called\n";
}

Dog::~Dog()
{
    std::cout << "Destructor Dog called\n";
}

Dog::Dog(std::string _type)
{
    type = _type;
	std::cout << "Parametized constructor Dog called \n";
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Copy assignment operator Dog called\n";
	if(this != &other)
		this->type = other.type;
	return(*this);
}

Dog::Dog(const Dog &other):Animal(other)
{
	std::cout << "Copy constructor Dog called\n";
	if(this != &other)
		*this = other;
}


void  Dog::makeSound() const
{
    std::cout << type << " Wouaf" << std::endl;
}