/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:06:40 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/30 12:09:33 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

//abstract class
//has to contain at least one pure virtual function
//abstract class can not be instantiated on its own
//works as blueprint
//every derived class needs to implement the pure virtual function
class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal& copy);
        Animal& operator=(const Animal& copy);
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const = 0; // Pure virtual function
};

#endif
