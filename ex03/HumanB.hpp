/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhan <batuhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:47:59 by bolcay            #+#    #+#             */
/*   Updated: 2025/12/02 16:43:36 by batuhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <string>
# include <iostream>
# include <limits>

class HumanB
{
    private:
        std::string name;
        Weapon      type;
    public:
        HumanB(std::string n)
        {
            name = n;
        }
		void	attack();
        void    setWeapon(Weapon typeA);
};

#endif