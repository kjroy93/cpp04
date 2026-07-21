/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 22:19:23 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/16 20:31:51 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{
		const Animal* animal = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		std::cout << "Dog: " << dog->getType() << " " << std::endl;
		std::cout << "Cat: " << cat->getType() << " " << std::endl;
		std::cout << "Cats make this sound: ";
		cat->makeSound();
		std::cout << "Dogs make this sound: ";
		dog->makeSound();
		std::cout << "Animals make this sound: ";
		animal->makeSound();
		delete (animal);
		delete (dog);
		delete (cat);
	}
	std::cout << "===================Wrong Cat=======================" << std::endl;
	{
		const Animal* animal = new Animal();
		const Animal* dog = new Dog();
		const WrongAnimal* cat = new WrongCat();
		std::cout << "Cats make this sound: ";
		cat->makeSound();
		std::cout << "Dogs make this sound: ";
		dog->makeSound();
		std::cout << "Animals make this sound: ";
		animal->makeSound();
		delete (animal);
		delete (dog);
		delete (cat);
	}
	return (0);
}
