/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 21:41:03 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/06 18:30:44 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
	:type_("empty")
{
	std::cout << "Default constructor for animal called" << std::endl;
}

Animal::Animal(const std::string& type)
	:type_(type)
{
	std::cout <<  "Constructor to define type of animal called" << std::endl;
	this->type_ = type;
}

Animal::Animal(const Animal& other)
{
	std::cout << "Copy constructor of Animal called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Copy assignmet for Animal called" << std::endl;
	if (this != &other)
	{
		this->type_ = other.type_;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor of animal called" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type_);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal has no sound!" << std::endl;
}
