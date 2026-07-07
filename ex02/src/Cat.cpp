/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 22:00:32 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/06 20:25:02 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
	:Animal("Cat"),
	brain_(new Brain())
{
	std::cout << "Default constructor for Cat called" << std::endl;
}

Cat::Cat(const std::string& type)
	:Animal(type),
	brain_(new Brain())
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
	delete (this->brain_);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau miau!!" << std::endl;
}

void	Cat::setIdea(int index, const std::string& idea)
{
	if (index >= 0 && index < 100)
		this->brain_->setIdea(index, idea);
	else
		std::cout << "Invalid index" << std::endl;
}

const std::string&	Cat::getIdea(int index) const
{
	return (this->brain_->getIdea(index));
}
