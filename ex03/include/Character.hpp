/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 19:53:33 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/13 20:06:29 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class	Character : public ICharacter
{
	private:
		std::string name_;
		AMateria*	inventory_[4];
	public:
		Character();
		Character(const std::string& name);
		Character(const Character& other);
		~Character();
		Character&			operator=(const Character& other);
		const std::string&	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif