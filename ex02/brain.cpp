/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:44:32 by valentin          #+#    #+#             */
/*   Updated: 2023/10/27 12:13:29 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain()
{
    std::string str;
    int i = 0;
    while (i < 100)
    {
        str = i;
        _ideas[i] = str;
        i++;
    }
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}
Brain&  Brain::operator=(const Brain& copy)
{
    std::cout << "Brain copy asignment operator called" << std::endl;
    int i = 0;
    while (i < 100)
    {
        _ideas[i] = copy._ideas[i];
        i++;
    }
    return (*this);
}
