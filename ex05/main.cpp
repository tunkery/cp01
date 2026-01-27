/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:37:50 by bolcay            #+#    #+#             */
/*   Updated: 2026/01/27 15:54:03 by bolcay           ###   ########.fr       */
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
	return (0);
}
