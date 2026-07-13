/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 18:30:49 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/13 22:15:41 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
	:AMateria("cure")
{}

Cure::Cure(const std::string& type)
	:AMateria(type)
{}

Cure::Cure(const Cure& other)
{
	*this = other;
}

Cure&	Cure::operator=(const Cure& other)
{
	if (this != &other)
		this->type_ = other.type_;
	return (*this);
}

Cure::~Cure()
{}

AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "Cure: * heals " << target.getName() << "'s " << "wounds" << std::endl;
}
