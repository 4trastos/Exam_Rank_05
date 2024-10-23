/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:52:05 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/23 17:31:41 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

SpellBook::SpellBook(const SpellBook& copy)
{
	this->_Spellbook = copy._Spellbook;
}

SpellBook& SpellBook::operator=(const SpellBook& copy)
{
	if (this != &copy)
	{
		this->_Spellbook = copy._Spellbook;
	}
	return (*this);
}

void SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
		_Spellbook[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(const std::string& SpellName)
{
	std::map<std::string, ASpell*>::iterator it = _Spellbook.find(SpellName);
	if (it != _Spellbook.end())
	{
		delete it->second;
		_Spellbook.erase(it);
	}
}

ASpell* SpellBook::createSpell(const std::string& SpellName)
{
	ASpell* tmp = NULL;
	if (_Spellbook.find(SpellName) != _Spellbook.end())
		tmp = _Spellbook[SpellName];
	return (tmp);
}