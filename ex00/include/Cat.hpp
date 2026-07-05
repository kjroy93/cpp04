/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 21:34:43 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/05 22:47:19 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class	Cat : public virtual Animal
{
	public:
		Cat();
		Cat(const std::string& type);
		Cat(const Cat& other);
		Cat&	operator=(const Cat& other);
		~Cat();
		void	makeSound(void) const;
};

#endif