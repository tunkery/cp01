/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:06:33 by bolcay            #+#    #+#             */
/*   Updated: 2026/03/10 16:11:57 by bolcay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain( std::string level)
{
	void	(Harl::*array[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	int		i = 0;
	std::string	s[] = { "DEBUG", "INFO", "WARNING", "ERROR"};

	while (i < 4)
	{
		if (level == s[i])
			break ;
		i++;
	}
	switch (i)
	{
		case 0:
			while (i < 4)
				(this->*array[i++])();
			break ;
		case 1:
			while (i < 4)
				(this->*array[i++])();
			break ;
		case 2:
			while (i < 4)
				(this->*array[i++])();
			break ;
		case 3:
			while (i < 4)
				(this->*array[i++])();
			break ;
	}
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
