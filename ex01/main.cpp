/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 18:48:29 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/14 20:16:57 by kmarrero         ###   ########.fr       */
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
	{
		Cat	basic;
		Cat	tmp = basic;
		basic.setIdea(0, "Eat");
		std::cout << basic.getIdea(0) << std::endl;
		std::cout << tmp.getIdea(0) << std::endl;
		tmp.setIdea(0, "Sleep");
		std::cout << tmp.getIdea(0) << std::endl;
		std::cout << basic.getIdea(0) << std::endl;
	}
	{
		animal[0]->makeSound();
		Cat	basic;
		Cat	tmp = basic;
		basic.setIdea(0, "Eat");
		tmp.setIdea(0, "Sleep");
		std::cout << basic.getIdea(0) << std::endl;
		std::cout << tmp.getIdea(0) << std::endl;
		std::cout << animal[0]->getType() << std::endl;
		Dog*	dog1;
		Cat*	cat1;
		dog1 = static_cast<Dog*>(animal[0]);
		cat1 = static_cast<Cat*>(animal[10]);
		dog1->setIdea(0, "sniff butt");
		dog1->setIdea(1, "he is a friend!");
		cat1->setIdea(0, "i'm listening something. Investigate");
		cat1->setIdea(1, "i want tuna, human slave. Feed me");
		cat1->setIdea(2, "are you talking with me?");
		std::cout << "dog idea: " << dog1->getIdea(0) << std::endl;
		std::cout << "dog idea: " << dog1->getIdea(1) << std::endl;
		std::cout << "cat idea: " << cat1->getIdea(0) << std::endl;
		std::cout << "cat idea: " << cat1->getIdea(1) << std::endl;
		std::cout << "cat idea: " << cat1->getIdea(2) << std::endl;
		for (int i = 0; i < 20; i++)
			delete animal[i];
	}
	return (0);
}
