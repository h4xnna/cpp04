/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:15:22 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/06 10:15:24 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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