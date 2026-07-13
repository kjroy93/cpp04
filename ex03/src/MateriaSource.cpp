/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 20:13:44 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/13 22:12:40 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
	:type_("Empty")
{
	for (int i = 0; i < 4; i++)
		template_[i] = NULL;
}

MateriaSource::MateriaSource(const std::string& name)
	:type_(name)
{
	for (int i = 0; i < 4; i++)
		template_[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	*this = other;
}

MateriaSource::~MateriaSource()
{}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		this->type_ = other.type_;
		for (int i = 0; i < 4; i++)
		{
			delete (template_[i]);
			template_[i] = NULL;
		}
		for (int i = 0; i < 4; i++)
		{
			if (other.template_[i])
				template_[i] = other.template_[i]->clone();
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (template_[i] == NULL)
		{
			template_[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::clone() const
{
	return (NULL);
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (template_[i] && template_[i]->getType() == type)
			return (template_[i]->clone());
	}
	return (NULL);
}