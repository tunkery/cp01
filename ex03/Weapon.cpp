/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:47:18 by bolcay            #+#    #+#             */
/*   Updated: 2026/03/12 20:18:46 by bolcay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType( void )
{
	return (type);
}

void	Weapon::setType(std::string n)
{
	const std::string &s = Weapon::getType();
	const std::string *c = &s;
    type = *c;
}
