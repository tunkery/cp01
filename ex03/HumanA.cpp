/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:48:22 by bolcay            #+#    #+#             */
/*   Updated: 2026/03/09 16:47:45 by bolcay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon typeA)
{
	name = n;
	type = &typeA;
}
void    HumanA::attack()
{
	std::cout << name << ": attacks with their "
			  << type->getType() << std::endl;
}
