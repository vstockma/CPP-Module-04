/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:26:12 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/27 12:17:21 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    _type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}
Dog&  Dog::operator=(const Dog& copy)
{
    std::cout << "Dog copy asignment operator called" << std::endl;
    _type = copy._type;
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}
