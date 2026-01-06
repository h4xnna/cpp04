



#include "Animal.hpp"


class Cat: public Animal
{
    private:    
        Brain *brain;
    public:
        Cat();
        ~Cat();
        Cat &operator=(const Cat &other);
		Cat(const Cat &other);
		Cat(std::string _type);
        void makeSound() const;
};