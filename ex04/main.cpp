/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:23:43 by bolcay            #+#    #+#             */
/*   Updated: 2026/01/21 13:21:05 by bolcay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

std::string	doit(std::string fn, std::string s2, std::string str, std::size_t found)
{
	return (0);
}

std::size_t	findit(std::string fn, std::string s1, std::string s2)
{
	std::size_t found = 1;
	std::string str;
	std::size_t size1 = s1.size();
	std::size_t size2 = s2.size();
	std::size_t	i;
	std::size_t	j = 0;

	found = fn.find(s1);
	std::cout << found << std::endl;
	if (found != 0)
	{
		str = fn.substr(0, found);
		str += s2;
	}
	std::cout << str << std::endl;
	i = found;
	i += size1;
	while (j != 2)
	{
		found = fn.find(s1, i);
		str.append(fn, i, (found - i));
		str += s2;
		i = found;
		i += size1;
		j++;
		// doit(fn, s2, str, found);
	}
	std::cout << str << std::endl;
	return (found);
}

int	main(int ac, char **av)
{
	std::string s1;
	std::string s2;
	std::string fn;
	std::size_t	here;
	
	// if (ac < 4)
	// {
	// 	std::cout << "The parameters can't be left empty" << std::endl;
	// 	return (0);
	// }
	// fn = av[1];
	// s1 = av[2];
	// s2 = av[3];
	here = findit("abcdefgehjklmeno", "e", "F");
	std::cout << here << std::endl;
	return (0);
}
