/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:47:59 by bolcay            #+#    #+#             */
/*   Updated: 2026/03/09 16:56:53 by bolcay           ###   ########.fr       */
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
        HumanB(std::string n);
		void	attack();
        void    setWeapon(Weapon typeA);
};

#endif