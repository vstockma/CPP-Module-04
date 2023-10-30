/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:06:11 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/30 11:56:59 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wronganimal.hpp"
#include "wrongcat.hpp"

int main()
{
    // Animal* arr[10];
    // int i = 0;
    // while (i < 10)
    // {
    //     if (i < 5)
    //         arr[i] = new Dog();
    //     else
    //         arr[i] = new Cat();
    //     i++;
    // }
    // i = 0;
    // while (i < 10)
    //     delete arr[i++];
        
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    i->makeSound();
    j->makeSound();
    delete j;//should not create a leak
    delete i;
    return 0;
}