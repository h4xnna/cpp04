#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        ~Dog();
        Dog &operator=(const Dog &other);
		Dog(const Dog &other);
		Dog(std::string _type);
        void makeSound() const;
};