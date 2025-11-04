/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 20:24:22 by bolcay            #+#    #+#             */
/*   Updated: 2025/11/04 21:07:41 by bolcay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *newz;
    int     i;

    i = 0;
    newz = new Zombie[N];
    while (i < N)
    {
        newz[i].set_name(name);
        newz[i].announce();
        i++;
    }
    return (newz);
}
