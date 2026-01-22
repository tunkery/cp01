/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:23:43 by bolcay            #+#    #+#             */
/*   Updated: 2026/01/22 14:46:49 by bolcay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

std::size_t	findit(std::string nm, std::string fn, std::string s1, std::string s2)
{
	std::size_t found = 1;
	std::string str;
	std::size_t size1 = s1.size();
	std::size_t size2 = s2.size();
	std::size_t	i;
	std::size_t	j = 0;
	std::string	file_name;

	found = fn.find(s1);
	i = found;
	i += size1;
	while (found < 1844674407370)
	{
		found = fn.find(s1, i);
		i = found;
		i += size1;
		j++;
	}
	while (j > 0)
	{
		found = fn.find(s1, i);
		str.append(fn, i, (found - i));
		str += s2;
		i = found;
		i += size1;
		j--;
	}
	str.append(fn, i, (found - i));
	file_name = nm;
	file_name += ".replace";
	std::ofstream newfile(file_name);
	newfile << str;
	newfile.close();
	// std::cout << str << std::endl;
	return (found);
}

int	main(int ac, char **av)
{
	std::string s1;
	std::string s2;
	std::string fn;
	std::size_t	here;
	std::string	line;
	std::ifstream f (av[1]);
	
	if (ac < 4)
	{
		std::cout << "The parameters can't be left empty" << std::endl;
		return (0);
	}
	if (!f.is_open())
	{
		std::cout << "File can't be opened" << std::endl;
		return (1);
	}
	while (1)
	{
		if (!std::getline(f, fn, '\0'))
			break ;
	}
	s1 = av[2];
	s2 = av[3];
	here = findit(av[1], fn, s1, s2);
	f.close();
	return (0);
}
