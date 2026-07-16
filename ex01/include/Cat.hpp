/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 21:34:43 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/16 15:54:39 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain*	brain_;
	public:
		Cat();
		Cat(const std::string& type);
		Cat(const Cat& other);
		~Cat();
		Cat&				operator=(const Cat& other);
		void				makeSound(void) const;
		void				setIdea(int index, const std::string& idea);
		const std::string&	getIdea(int index) const;
};

#endif