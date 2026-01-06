#include "Animal.hpp"

class Dog: public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        ~Dog();
        Dog &operator=(const Dog &other);
		Dog(const Dog &other);
		Dog(std::string _type);
        void makeSound() const;
};