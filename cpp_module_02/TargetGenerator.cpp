/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:52:39 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/23 17:53:10 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

TargetGenerator::TargetGenerator(const TargetGenerator& copy)
{
	this->_target = copy._target; 
}

TargetGenerator& TargetGenerator::operator=(const TargetGenerator& copy)
{
	if (this != &copy)
		this->_target = copy._target;
	return (*this);
}

void TargetGenerator::learnTargetType(ATarget* target)
{
	if (target)
		_target[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(const std::string& target)
{
	if (_target.find(target) != _target.end())
		_target.erase(_target.find(target));
}

ATarget* TargetGenerator::createTarget(const std::string& target)
{
	ATarget* tmp = NULL;
	if (_target.find(target) != _target.end())
		tmp = _target[target];
	return (tmp);
}