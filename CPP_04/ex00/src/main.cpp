/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:47:07 by muabdi            #+#    #+#             */
/*   Updated: 2026/01/08 17:03:23 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include <iostream>

int main(void)
{
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "            TESTING ANIMAL CLASS         " << std::endl;

    const Animal *meta = new Animal();
    std::cout << meta->getType() << " " << std::endl;
    meta->makeSound(); // will output the animal default sound!
    delete meta;

    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "             TESTING DOG CLASS           " << std::endl;


    const Dog *dog = new Dog();
    std::cout << dog->getType() << " " << std::endl;
    dog->makeSound(); // will output the dog sound!
    delete dog;

    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "             TESTING CAT CLASS           " << std::endl;


    const Cat *cat = new Cat();
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound(); // will output the cat sound!
    delete cat;

    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "        TESTING WRONG ANIMAL CLASS       " << std::endl;

    const WrongAnimal *wrongMeta = new WrongAnimal();
    std::cout << wrongMeta->getType() << " " << std::endl;
    wrongMeta->makeSound(); // will output the wrong animal default sound!
    delete wrongMeta;

    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "         TESTING WRONG CAT CLASS         " << std::endl;

    const WrongAnimal *wrongCat = new WrongCat();
    std::cout << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound(); // will output the wrong cat sound!
    delete wrongCat;

    std::cout << "-----------------------------------------" << std::endl;

    return 0;
}