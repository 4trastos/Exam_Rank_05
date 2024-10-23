/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:51:53 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/23 18:10:28 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include "Warlock.hpp"
# include "ASpell.hpp"

class ASpell;

class SpellBook
{
	protected:
		SpellBook(const SpellBook& copy);
		SpellBook& operator=(const SpellBook& copy);
		std::map<std::string, ASpell*> _Spellbook;

	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell* spell);
		void forgetSpell(const std::string&);
		ASpell* createSpell(const std::string&);
};

#endif