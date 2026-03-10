/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:37:50 by bolcay            #+#    #+#             */
/*   Updated: 2026/03/10 15:39:07 by bolcay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// void	to_lower(std::string s)
// {
// 	for (auto &x : s)
// 		x = tolower(x);
// }

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "You need to give more arguments" << std::endl;
		return (0);
	}
	if (ac > 2)
	{
		std::cout << "You need to give less arguments" << std::endl;
		return (0);
	}

	std::string	s = av[1];
	Harl		harl;

	harl.complain(s);
	// to_lower(s);
	return (0);
}
