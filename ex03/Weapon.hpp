/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:46:25 by bolcay            #+#    #+#             */
/*   Updated: 2025/11/12 11:05:06 by bolcay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>
# include <limits>

class Weapon
{
    private:
        std::string type;
    public:
    	const std::string &getType(std::string n);
		void	setType(std::string n);
};

#endif