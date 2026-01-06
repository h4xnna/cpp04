/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanna <hanna@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 22:11:08 by hanna             #+#    #+#             */
/*   Updated: 2026/01/04 22:33:18 by hanna            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#define red "\x1B[31m"
#define reset "\033[0m"
#define blue "\x1B[34m"
#define green "\x1B[32m"
#define yellow "\x1B[33m"
#include <string.h>
#include <iostream>

class Brain
{
    public:
        std::string ideas[100];
        Brain();
        ~Brain();
        Brain &operator=(const Brain &other);
		Brain(const Brain &other);
		Brain(std::string _ideas);
        void makeSound() const;
        
};

