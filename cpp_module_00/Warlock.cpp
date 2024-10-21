/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:19:05 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/21 15:58:37 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock() {}

Warlock::~Warlock() {
	std::cout << this->name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const std::string name, const std::string tittle) : name(name), tittle(tittle) {
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock& copy) : name(copy.name), tittle(copy.tittle) {}

Warlock& Warlock::operator=(const Warlock& copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		this->tittle = copy.tittle;
	}
	return (*this);
}

void Warlock::setTitle(const std::string& newTittle)
{
	this->tittle = newTittle;
}

const std::string& Warlock::getName () const
{
	return (this->name);
}

const std::string& Warlock::getTitle() const
{
	return (this->tittle);
}

void Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->tittle << "!" << std::endl;
}
