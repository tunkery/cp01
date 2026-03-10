/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:47:29 by bolcay            #+#    #+#             */
/*   Updated: 2026/03/09 14:54:19 by bolcay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie( std::string name )
{
    Zombie	*zombi;

	zombi = new Zombie(name);
    zombi->announce();
    return (zombi);
}
