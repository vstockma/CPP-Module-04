/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:09:20 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/30 12:12:00 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
    _type = "Animal";
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}
Animal&  Animal::operator=(const Animal& copy)
{
    std::cout << "Animal copy asignment operator called" << std::endl;
    _type = copy._type;
    return (*this);
}

std::string Animal::getType() const
{
    return(_type);
}

void    Animal::makeSound() const
{
    std::cout << "Hi i am an animal" << std::endl;
}

//alternative version

// void    Animal::makeSound() const
// {
//     if (_type == "Dog")
//         std::cout << "Woof" << std::endl;
//     else if (_type == "Cat")
//         std::cout << "Miau" << std::endl;
//     else
//         std::cout << "Hi i am an animal" << std::endl;
// }
