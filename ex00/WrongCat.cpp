#include "WrongCat.hpp"

WrongCat& WrongCat::operator=(const WrongCat &other)
{
    std::cout << "Copy assignment operator WrongCat called\n";
	if(this != &other)
		this->type = other.type;
	return(*this);
}
WrongCat::WrongCat(const WrongCat &other):WrongAnimal(other)
{
	std::cout << "Copy constructor WrongCat called\n";
	if(this != &other)
		*this = other;
}
WrongCat::WrongCat(std::string _type)
{
    type = _type;
    std::cout << "Parametized constructor WrongCat called \n";
}

WrongCat::~WrongCat()
{
   	std::cout << "Destructor WrongCat called\n";
}
WrongCat::WrongCat()
{
    type = "WrongCat";
	std::cout << "Default constructor WrongCat called \n";
}
const std::string &WrongCat::getType() const
{
    return this->type;
}