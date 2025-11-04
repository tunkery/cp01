/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 20:23:30 by bolcay            #+#    #+#             */
/*   Updated: 2025/11/04 21:07:13 by bolcay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
    Zombie *newz;
    int     number;

    if (ac == 1)
    {
        std::cout << "AaaagggghhhhhhH...\n";
        return (0);
    }
    number = std::atoi(av[1]);
    newz = zombieHorde(number, av[2]);
    return (0);
}
