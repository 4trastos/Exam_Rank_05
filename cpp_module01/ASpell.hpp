/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:08:54 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/23 15:14:35 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include "Warlock.hpp"
# include "ATarget.hpp"

class ATarget;

class ASpell
{
	protected:
		std::string name;
		std::string effects;
	
	public:
		ASpell();
		ASpell(const ASpell& copy);
		ASpell& operator=(const ASpell& copy);
		virtual~ASpell();

		ASpell(const std::string name, const std::string effects);

		const std::string getName() const;
		const std::string getEffects() const;

		virtual ASpell* clone() const = 0;

		void launch(const ATarget& target) const;
};

#endif