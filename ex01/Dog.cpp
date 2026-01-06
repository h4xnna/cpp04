#include "Dog.hpp"

Dog::Dog()
{
	brain = new Brain;
	std::cout << "Default constructor Dog called\n";
    type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Destructor Dog called\n";
	delete brain;
}

Dog::Dog(std::string _type)
{
	std::cout << "Parametized constructor Dog called \n";
    type = _type;
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Copy assignment operator Dog called\n";
	if(this != &other)
	{
		delete brain;
		this->type = other.type;
		brain = new Brain(*other.brain);
	}
	return(*this);
}

Dog::Dog(const Dog &other):Animal(other)
{
	std::cout << "Copy constructor Dog called\n";
	if(this != &other)
	{
		this->type = other.type;
		brain = new Brain(*other.brain);
	}
}


void  Dog::makeSound() const
{
    std::cout << type << " WOUAF!" << std::endl;
}