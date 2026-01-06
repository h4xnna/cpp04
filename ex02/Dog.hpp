/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:17:19 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/06 10:17:20 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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