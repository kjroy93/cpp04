/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 17:42:34 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/13 19:47:10 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
		Ice();
		Ice(const std::string& type);
		Ice(const Ice& other);
		Ice&		operator=(const Ice& other);
		virtual		~Ice();
		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif