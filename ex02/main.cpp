/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:11:18 by bolcay            #+#    #+#             */
/*   Updated: 2025/11/12 12:41:46 by bolcay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string	&stringREF = s;
	std::string	*stringPTR = &s;

	std::cout << "The memory address of the string variable: " << &s << std::endl
			  << "The memory address held by stringPTR: " << &stringREF << std::endl
			  << "The memory address held by stringREF: " << &stringPTR << std::endl;

	std::cout << "The value of the string variable: " << s << std::endl
		  	  << "The value pointed to by stringPTR: " << stringREF << std::endl
		  	  << "The value pointed to by stringREF: " << stringPTR << std::endl;
	
	return (0);
} 
