/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhan <batuhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:45:42 by bolcay            #+#    #+#             */
/*   Updated: 2025/12/02 16:45:48 by batuhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	Weapon	knife = Weapon("Thick cub");
	HumanA	jay("Jay", knife);

	jay.attack();
	knife.setType("Big thick cub");
	jay.attack();

	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");

	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	
	return (0);
}
