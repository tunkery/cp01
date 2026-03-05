/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 20:23:30 by bolcay            #+#    #+#             */
/*   Updated: 2026/03/05 13:30:33 by bolcay           ###   ########.fr       */
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
    delete [] newz;
    return (0);
}
