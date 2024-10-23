/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:40:36 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/23 18:02:47 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock() {
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << this->name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const Warlock& copy)
{
	this->name = copy.name;
	this->title = copy.title;
}

Warlock& Warlock::operator=(const Warlock& copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		this->title = copy.title;
	}
	return (*this);
}

Warlock::Warlock(const std::string name, const std::string newTitle)
{
	this->name = name;
	this->title = newTitle;
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

void	Warlock::setTitle(const std::string& newTitle)
{
	this->title = newTitle;
}

const std::string& Warlock::getName() const
{
	return (this->name);
}

const std::string& Warlock::getTitle() const
{
	return (this->title);
}

void	Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell* spell)
{
	_Spellbook.learnSpell(spell);
}

void	Warlock::launchSpell(std::string spellName, const ATarget& target)
{
	if (_Spellbook.createSpell(spellName))
	{
		_Spellbook.createSpell(spellName)->launch(target);
	}	
}

void	Warlock::forgetSpell(std::string spellName)
{
	_Spellbook.forgetSpell(spellName);
}
