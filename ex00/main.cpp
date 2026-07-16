/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 22:19:23 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/16 17:34:08 by kmarrero         ###   ########.fr       */
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
		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		std::cout << "Cats make this sound:" << std::endl;
		cat->makeSound();
		std::cout << "Dogs make this sound:" << std::endl;
		dog->makeSound();
		std::cout << "Animals sound:" << std::endl;
		animal->makeSound();
		delete (animal);
		delete (dog);
		delete (cat);
	}
	std::cout << "==========================================" << std::endl;
	{
		const Animal* animal = new Animal();
		const Animal* dog = new Dog();
		const WrongAnimal* cat = new WrongCat();
		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		std::cout << "Cats make this sound:" << std::endl;
		cat->makeSound();
		std::cout << "Dogs make this sound:" << std::endl;
		dog->makeSound();
		std::cout << "Animals sound:" << std::endl;
		animal->makeSound();
		delete (animal);
		delete (dog);
		delete (cat);
	}
	return (0);
}
