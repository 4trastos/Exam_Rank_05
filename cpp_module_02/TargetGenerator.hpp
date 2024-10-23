/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:52:28 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/23 17:45:17 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include "Warlock.hpp"
# include "ATarget.hpp"

class ATarget;

class TargetGenerator
{
	private:
		TargetGenerator(const TargetGenerator& copy);
		TargetGenerator& operator=(const TargetGenerator& copy);
		std::map<std::string, ATarget*> _target;
		
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget*);
		void forgetTargetType(const std::string&);
		ATarget* createTarget(const std::string&);
};

#endif