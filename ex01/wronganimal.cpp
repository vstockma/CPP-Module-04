/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wronganimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:06:16 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/25 14:26:19 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wronganimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called" << std::endl;
    _type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = copy;
}
WrongAnimal&  WrongAnimal::operator=(const WrongAnimal& copy)
{
    std::cout << "WrongAnimal copy asignment operator called" << std::endl;
    _type = copy._type;
    return (*this);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Im a wrong Animal" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return(_type);
}
