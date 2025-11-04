/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 20:22:54 by bolcay            #+#    #+#             */
/*   Updated: 2025/11/04 21:04:09 by bolcay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>
# include <iostream>
# include <limits>

class Zombie
{
    private:
        std::string name;
    public:
		Zombie( void )
		{
		}
        Zombie( std::string n)
        {
            name = n;
        }
		void	set_name( std::string n);
        void	announce( void );
};

Zombie *zombieHorde(int N, std::string name);

#endif