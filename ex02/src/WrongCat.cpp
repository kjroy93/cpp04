/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 17:58:21 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/06 18:32:06 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
	:WrongAnimal("Dog")
{
	std::cout << "Default constructor of WrongCat called" << std::endl;
}

WrongCat::WrongCat(const std::string& type)
	:WrongAnimal(type)
{
	std::cout << "Default constructor of WrongCat" << std::endl;
	this->type_ = type;
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << "Copy constructor of WrongCat called" << std::endl;
	*this = other;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	std::cout << "Assigment constructor of WrongCat called" << std::endl;
	if (this != &other)
		this->type_ = other.type_;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor of WrongCat called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miau miau!!" << std::endl;
}
