/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 20:10:51 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/13 21:47:38 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "AMateria.hpp"

class	MateriaSource : public AMateria
{
	private:
		std::string	type_;
		AMateria*	template_[4];
	public:
		MateriaSource();
		MateriaSource(const std::string& name);
		MateriaSource(const MateriaSource& other);
		~MateriaSource();
		MateriaSource&		operator=(const MateriaSource& other);
		void				learnMateria(AMateria* m);
		AMateria*			clone() const;
		AMateria*			createMateria(const std::string& type);		
};

#endif