/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 22:00:32 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/05 22:34:35 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	:Animal("Cat")
{
	std::cout << "Default constructor for Cat called" << std::endl;
}

Cat::Cat(const std::string& type)
	:Animal(type)
{
	std::cout << "Constructor for Cat called" << std::endl;
	this->type_ = type;
}

Cat::Cat(const Cat& other)
{
	std::cout << "Copy constructor of Cat called" << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Copy assignmet of Cat called" << std::endl;
	if (this != &other)
	{
		this->type_ = other.type_;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor of Cat called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau miau!!" << std::endl;
}
