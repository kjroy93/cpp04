/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 21:10:45 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/05 22:32:07 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class	Animal
{
	protected:
		std::string	type_;
	public:
		Animal();
		Animal(const std::string& type_);
		Animal(const Animal& other);
		Animal&	operator=(const Animal& other);
		virtual ~Animal();
		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

#endif