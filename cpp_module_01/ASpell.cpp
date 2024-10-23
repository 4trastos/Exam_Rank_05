/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:09:03 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/23 15:10:25 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::~ASpell() {}

ASpell::ASpell(const std::string name, const std::string effects)
{
	this->name = name;
	this->effects = effects;
}

ASpell::ASpell(const ASpell& copy)
{
	this->name = copy.name;
	this->effects = copy.effects;
}

ASpell& ASpell::operator=(const ASpell& copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		this->effects = copy.effects;
	}
	return (*this);
}

const std::string ASpell::getName() const
{
	return (this->name);
}

const std::string ASpell::getEffects() const
{
	return (this->effects);
}

void ASpell::launch(const ATarget & target) const
{
	target.getHitBySpell(*this);	
}
