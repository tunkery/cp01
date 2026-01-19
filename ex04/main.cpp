/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:23:43 by bolcay            #+#    #+#             */
/*   Updated: 2026/01/19 15:26:58 by bolcay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

std::string	doit(std::string fn, std::string s2, std::string str, std::size_t found)
{
	return (0);
}

int	findit(std::string fn, std::string s1, std::string s2)
{
	std::size_t found = 1;
	std::string str;

	while (found != 0)
	{
		found = fn.find(s1);
		doit(fn, s2, str, found);
	}
	return (0);
}

int	main(int ac, char **av)
{
	std::string s1;
	std::string s2;
	std::string fn;
	
	if (ac < 4)
	{
		std::cout << "The parameters can't be left empty" << std::endl;
		return (0);
	}
	fn = av[1];
	s1 = av[2];
	s2 = av[3];
	return (0);
}
