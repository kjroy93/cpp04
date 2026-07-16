/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarrero <kmarrero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 18:48:51 by kmarrero          #+#    #+#             */
/*   Updated: 2026/07/16 15:54:24 by kmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class	Brain
{
	private:
		std::string	ideas_[100];
	public:
		Brain();
		Brain(const Brain& other);
		~Brain();
		Brain&				operator=(const Brain& other);
		void				setIdea(int index, const std::string& idea);
		const std::string&	getIdea(int index) const;
};

#endif