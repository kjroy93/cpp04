/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 21:37:49 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/16 15:54:32 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
	private:
		Brain*	brain_;
	public:
		Dog();
		Dog(const std::string& type);
		Dog(const Dog& other);
		~Dog();
		Dog&				operator=(const Dog& other);
		void				makeSound(void) const;
		void				setIdea(int index, const std::string& idea);
		const std::string&	getIdea(int index) const;
};

#endif