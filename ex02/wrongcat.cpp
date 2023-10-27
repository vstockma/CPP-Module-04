/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongcat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:59:59 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/25 14:11:17 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongcat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called" << std::endl;
    _type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = copy;
}
WrongCat&  WrongCat::operator=(const WrongCat& copy)
{
    std::cout << "WrongCat copy asignment operator called" << std::endl;
    _type = copy._type;
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "Miau" << std::endl;
}
