/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 16:47:46 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/07 18:55:11 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"

int	main(void)
{
	{
		Cat	cat = Cat();
		Animal*	a1[1];
		
		a1[0] = new Dog();

		cat.makeSound();
		cat.setIdea(0, "i want tuna :(");
		Dog*	d1;
		d1 = static_cast<Dog*>(a1[0]);
		d1->makeSound();
		d1->setIdea(0, "dig bone");
		
		std::cout << cat.getIdea(0) << std::endl;
		std::cout << d1->getIdea(0) << std::endl;
		delete (a1[0]);
	}
	return (0);
}
