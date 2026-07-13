/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 17:33:22 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/13 22:22:19 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
	AMateria*	floor[100];
	{
		Character		character = Character("Liael");
		Character		ch_t = Character("Varga");
		MateriaSource	tmp = MateriaSource();
		Ice				m = Ice();
		Cure			n = Cure();
		AMateria*		ice = m.clone();
		AMateria*		cure = n.clone();
	
		tmp.learnMateria(ice);
		tmp.learnMateria(cure);
		AMateria*	created = tmp.createMateria("ice");
		AMateria*	created_1 = tmp.createMateria("cure");
		character.equip(created);
		character.equip(created_1);
		character.use(1, ch_t);
		(void)floor;
		delete (ice);
		delete (cure);
		delete (created);
		delete (created_1);
	}
	return (0);
}