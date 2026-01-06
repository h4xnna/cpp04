/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:15:55 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/06 10:15:56 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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