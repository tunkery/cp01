/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:46:25 by bolcay            #+#    #+#             */
/*   Updated: 2026/03/12 20:07:37 by bolcay           ###   ########.fr       */
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
		Weapon()
		{}
		Weapon(std::string n) : type(n) {};
    	const std::string &getType( void );
		void	setType(std::string n);
};

#endif