/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgalle <davgalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:09:37 by davgalle          #+#    #+#             */
/*   Updated: 2024/10/23 16:08:03 by davgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOS_HPP
# define FWOOS_HPP

# include "Warlock.hpp"
# include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
		Fwoosh();
		~Fwoosh();

		Fwoosh* clone() const;
};

#endif