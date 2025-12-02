/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhan <batuhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:48:31 by bolcay            #+#    #+#             */
/*   Updated: 2025/12/02 16:45:21 by batuhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon typeA)
{
	type = typeA;
}

void    HumanB::attack()
{
	std::cout << name << ": attacks with their "
			  << type.getType() << std::endl;
}
