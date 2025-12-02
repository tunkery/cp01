/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhan <batuhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:47:28 by bolcay            #+#    #+#             */
/*   Updated: 2025/12/02 16:46:00 by batuhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <string>
# include <iostream>
# include <limits>

class HumanA
{
    private:
        std::string	name;
        Weapon		*type;
    public:
		HumanA()
		{}
		HumanA(std::string n, Weapon typeA)
		{
			name = n;
			type = &typeA;
		}
		void	attack();
};

#endif