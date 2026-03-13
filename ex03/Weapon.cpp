/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:47:18 by bolcay            #+#    #+#             */
/*   Updated: 2026/03/13 21:07:28 by bolcay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType( void )
{
	return (type);
}

void	Weapon::setType(std::string n)
{
    type = n;
}
