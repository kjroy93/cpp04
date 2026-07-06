/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 18:48:29 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/06 20:28:02 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	Animal*	animal[20];

	for (int i = 0; i < 10; i++)
	{
		animal[i] = new Dog();
	}
	for (int i = 10; i < 20; i++)
	{
		animal[i] = new Cat();
	}
	animal[0]->makeSound();
	std::cout << animal[0]->getType() << std::endl;
	Dog*	dog1;
	Dog*	dog2;
	dog1 = static_cast<Dog*>(animal[0]);
	dog2 = static_cast<Dog*>(animal[1]);
	dog1->setIdea(0, "sniff butt");
	dog1->setIdea(1, "grrr... Bark!");
	std::cout << dog2->getIdea(0) << std::endl;
	std::cout << dog1->getIdea(0) << std::endl;
	std::cout << dog1->getIdea(1) << std::endl;
	for (int i = 0; i < 20; i++)
		delete animal[i];
	return (0);
}
