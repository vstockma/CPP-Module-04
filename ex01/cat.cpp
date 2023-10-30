/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:26:38 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/30 11:02:55 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    _type = "Cat";
    _catbrain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete _catbrain;
}

Cat::Cat(const Cat& copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}
Cat&  Cat::operator=(const Cat& copy)
{
    std::cout << "Cat copy asignment operator called" << std::endl;
    _type = copy._type;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Miau" << std::endl;
}
