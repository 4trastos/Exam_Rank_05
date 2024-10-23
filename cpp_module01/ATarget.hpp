/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:09:15 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/23 16:11:42 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include "ASpell.hpp"
# include "Warlock.hpp"

class ASpell;

class ATarget
{
	protected:
		std::string type;
		
	public:
		ATarget();
		ATarget(const ATarget& copy);
		ATarget& operator=(const ATarget& copy);
		virtual~ATarget();

		ATarget(const std::string type);
		const std::string& getType() const;

		virtual ATarget * clone() const = 0;

		void	getHitBySpell(const ASpell& spell) const;
};

#endif