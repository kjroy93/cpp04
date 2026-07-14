/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 17:33:22 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/14 17:18:37 by kmarrero         ###   ########.fr       */
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
		floor[0] = character.getItem(0);
		floor[1] = character.getItem(1);
		character.use(0, ch_t);
		character.use(1, ch_t);
		character.unequip(0);
		character.unequip(1);
		delete (ice);
		delete (cure);
		delete (floor[0]);
		delete (floor[1]);
	}
	return (0);
}
