/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 17:42:51 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/13 19:47:19 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure();
		Cure(const std::string& type);
		Cure(const Cure& other);
		Cure&		operator=(const Cure& other);
		virtual		~Cure();
		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif