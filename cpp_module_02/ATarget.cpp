/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:25:55 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/23 16:16:23 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget () {}

ATarget::~ATarget() {}

ATarget::ATarget(const ATarget& copy)
{
	this->type = copy.type;
}

ATarget::ATarget(const std::string type)
{
	this->type = type;
}

ATarget& ATarget::operator=(const ATarget& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

const std::string& ATarget::getType() const
{
	return (this->type);
}

void	ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;	
}

