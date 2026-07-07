/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 22:12:20 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/06 20:22:39 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
	:Animal("Dog"),
	brain_(new Brain())
{
	std::cout << "Default constructor for Dog called" << std::endl;
}

Dog::Dog(const std::string& type)
	:Animal(type),
	brain_(new Brain())
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
	delete (this->brain_);
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark Bark!!" << std::endl;
}

void	Dog::setIdea(int index, const std::string& idea)
{
	if (index >= 0 && index < 100)
		brain_->setIdea(index, idea);
	else
		std::cout << "Invalid index" << std::endl;
}

const std::string&	Dog::getIdea(int index) const
{
	return (this->brain_->getIdea(index));
}
