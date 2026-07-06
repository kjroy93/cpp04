/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 22:19:23 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/06 18:33:30 by kmarrero         ###   ########.fr       */
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
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << "Cats make this sound:" << std::endl;
		i->makeSound();
		std::cout << "Dogs make this sound:" << std::endl;
		j->makeSound();
		std::cout << "Animals sound:" << std::endl;
		meta->makeSound();
		delete (meta);
		delete (j);
		delete (i);
	}
	std::cout << "==========================================" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const WrongAnimal* i = new WrongCat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << "Cats make this sound:" << std::endl;
		i->makeSound();
		std::cout << "Dogs make this sound:" << std::endl;
		j->makeSound();
		std::cout << "Animals sound:" << std::endl;
		meta->makeSound();
		delete (meta);
		delete (j);
		delete (i);
	}
	return (0);
}
