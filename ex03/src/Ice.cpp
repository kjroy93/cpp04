/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 18:53:28 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/13 22:15:49 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
	:AMateria("ice")
{}

Ice::Ice(const std::string& type)
	:AMateria(type)
{}

Ice::Ice(const Ice& other)
{
	*this = other;
}

Ice&	Ice::operator=(const Ice& other)
{
	if (this != &other)
		this->type_ = other.type_;
	return (*this);
}

Ice::~Ice()
{}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
    std::cout << "Ice: * shoots an ice bolt at " << target.getName() << std::endl;
}
