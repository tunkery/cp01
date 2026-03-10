/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:37:50 by bolcay            #+#    #+#             */
/*   Updated: 2026/03/10 16:05:06 by bolcay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

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
	return (0);
}
