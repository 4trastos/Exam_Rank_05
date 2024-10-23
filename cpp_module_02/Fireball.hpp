/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:50:18 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/23 17:59:20 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include "Warlock.hpp"
# include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
		Fireball();
		~Fireball();

		Fireball* clone() const;
};

#endif