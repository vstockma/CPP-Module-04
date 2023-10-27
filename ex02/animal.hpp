/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:06:40 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/27 12:26:12 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string _type;
    private:
        Animal();
    public:
        Animal(const Animal& copy);
        Animal& operator=(const Animal& copy);
        ~Animal();
        std::string getType() const;
        virtual void makeSound() const;
};

#endif
