/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:19:08 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/21 15:47:39 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Warlock
{
	private:
		std::string name;
		std::string tittle;
		
	public:
		Warlock();
		Warlock(const Warlock& copy);
		Warlock& operator=(const Warlock& copy);
		~Warlock();

		Warlock(const std::string name, const std::string tittle);
		const std::string& getName() const;
		const std::string& getTitle() const;

		void setTitle(const std::string& newTittle);

		void introduce() const;
};

#endif
