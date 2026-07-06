/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 17:58:27 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/06 18:35:39 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor of WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type)
{
	std::cout << "Default constructor of WrongAnimal" << std::endl;
	this->type_ = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "Copy constructor of WrongAnimal called" << std::endl;
	*this = other;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "Assigment constructor called" << std::endl;
	if (this != &other)
		this->type_ = other.type_;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor of WrongAnimal called" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type_);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Animal has no sound!" << std::endl;
}
