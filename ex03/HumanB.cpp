/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:48:31 by bolcay            #+#    #+#             */
/*   Updated: 2026/03/13 21:07:11 by bolcay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// HumanB::HumanB(std::string n)
// {
//     name = n;
// }

void	HumanB::setWeapon(Weapon typeA)
{
	type = &typeA;
}

void    HumanB::attack()
{
	std::cout << name << ": attacks with their "
			  << type->getType() << std::endl;
}
