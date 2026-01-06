/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmimouni <hmimouni@>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 10:16:56 by hmimouni          #+#    #+#             */
/*   Updated: 2026/01/06 10:16:57 by hmimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
    std::cout << "Defaul constructor Brain called\n";
}

Brain::~Brain()
{
    std::cout << "Destructor Brain called\n";
}

Brain::Brain(std::string _ideas)
{
    *ideas = _ideas;
	std::cout << "Parametized constructor Brain called \n";
}

Brain& Brain::operator=(const Brain &other)
{
    int i = 0;
	std::cout << "Copy assignment operator Brain called\n";
	if(this != &other)
    {
        while(i < 100)
        {
            this->ideas[i] = other.ideas[i];
            i++;
        }
    }
	return(*this);
}

Brain::Brain(const Brain &other)
{
    int i = 0;
	std::cout << "Copy constructor Brain called\n";
	if(this != &other)
    {
        while(i < 100)
        {
            this->ideas[i] = other.ideas[i];
            i++;
        }
    }
}