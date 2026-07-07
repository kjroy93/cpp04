/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 18:49:32 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/06 20:18:21 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor for Brain called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Copy constructor of Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
        ideas_[i] = other.ideas_[i];
}

Brain&	Brain::operator=(const Brain& other)
{
	std::cout << "Assignment constructor of Brain called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas_[i] = other.ideas_[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor of Brain called" << std::endl;
}

void	Brain::setIdea(int index, const std::string& idea)
{
	if (index >= 0 && index < 100)
		this->ideas_[index] = idea;
	else
		std::cout << "Invalid index" << std::endl;
}

const std::string&	Brain::getIdea(int index) const
{
	return (this->ideas_[index]);
}
