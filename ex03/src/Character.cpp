/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 19:53:27 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/13 22:14:19 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
	:name_("Empty")
{
	for (int i = 0; i < 4; i++)
		inventory_[i] = NULL;
}

Character::Character(const std::string& name)
	:name_(name)
{
	for (int i = 0; i < 4; i++)
		inventory_[i] = NULL;
}

Character::Character(const Character& other)
{
	for (int i = 0; i < 4; i++)
		inventory_[i] = NULL;
	*this = other;
}

Character&	Character::operator=(const Character& other)
{
	if (this != &other)
	{
		name_ = other.name_;
		for (int i = 0; i < 4; i++)
		{
			delete (inventory_[i]);
			inventory_[i] = NULL;
		}
		for (int i = 0; i < 4; i++)
		{
			if (other.inventory_[i])
				inventory_[i] = other.inventory_[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{}

const	std::string&	Character::getName() const
{
	return (name_);
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (inventory_[i] == NULL)
		{
			this->inventory_[i] = m;
			return ;
		}
	}
	std::cout << "Inventory it's full!" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	this->inventory_[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	AMateria*	m;

	if (idx < 0 || idx >= 4)
		return;
	m = inventory_[idx];
	if (m)
		m->use(target);
}
