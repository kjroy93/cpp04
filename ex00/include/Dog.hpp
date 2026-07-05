/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 21:37:49 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/05 22:47:13 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class	Dog : public virtual Animal
{
	public:
		Dog();
		Dog(const std::string& type);
		Dog(const Dog& other);
		Dog&	operator=(const Dog& other);
		~Dog();
		void	makeSound(void) const;
};

#endif