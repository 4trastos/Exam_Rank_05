/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:40:28 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/23 15:18:53 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class ASpell;
class ATarget;

class Warlock
{
	private:
		std::string name;
		std::string title;
		std::map<std::string, ASpell*> spells;
		
	public:
		Warlock();
		Warlock(const Warlock& copy);
		Warlock& operator=(const Warlock& copy);
		~Warlock();

		Warlock(const std::string name, const std::string newTitle);

		const std::string& getName() const;
		const std::string& getTitle() const;

		void setTitle(const std::string& newTitle);

		void introduce() const;

		void learnSpell(ASpell* spell);
		void launchSpell(std::string spellName, const ATarget& target);
		void forgetSpell(std::string spellName);
};

#endif