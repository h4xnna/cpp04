/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:15:31 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/06 10:15:32 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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