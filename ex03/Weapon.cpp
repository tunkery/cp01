/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:47:18 by bolcay            #+#    #+#             */
/*   Updated: 2025/11/12 12:41:00 by bolcay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType(std::string n)
{
	std::string	&s = n;

	return (s);
}

void	Weapon::setType(std::string n)
{
    type = n;
}
