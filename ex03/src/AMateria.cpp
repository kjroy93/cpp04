/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 17:54:29 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/13 20:25:38 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(const std::string& type)
	:type_(type)
{}

AMateria::AMateria(const AMateria& other)
{
	*this = other;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
	{
		this->type_ = other.type_;
	}
	return (*this);
}

AMateria::~AMateria()
{}

const std::string& AMateria::getType() const
{
	return (this->type_);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}
