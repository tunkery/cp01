/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:47:59 by bolcay            #+#    #+#             */
/*   Updated: 2025/11/12 12:50:37 by bolcay           ###   ########.fr       */
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
    public:
		void	attack();
        void    setWeapon(std::string s);
};

#endif