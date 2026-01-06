/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:16:23 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/06 10:16:27 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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