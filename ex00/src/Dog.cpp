/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 22:12:20 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/16 17:37:20 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
	:Animal("Dog")
{
	std::cout << "Default constructor for Dog called" << std::endl;
}

Dog::Dog(const std::string& type)
	:Animal(type)
{
	std::cout << "Constructor for Dog called" << std::endl;
	this->type_ = type;
}

Dog::Dog(const Dog& other)
{
	std::cout << "Copy constructor of Dog called" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Copy assignmet of Dog called" << std::endl;
	if (this != &other)
	{
		this->type_ = other.type_;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor of Dog called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark Bark!!" << std::endl;
}
