#include "WrongAnimal.hpp"


class WrongCat: public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat &operator=(const WrongCat &other);
		WrongCat(const WrongCat &other);
		WrongCat(std::string _type);
        const std::string &getType() const;
};