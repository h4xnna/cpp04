



#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
        ~Cat();
        Cat &operator=(const Cat &other);
		Cat(const Cat &other);
		Cat(std::string _type);
        void makeSound() const;
};