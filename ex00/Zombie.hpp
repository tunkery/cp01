/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolcay <bolcay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:40:06 by bolcay            #+#    #+#             */
/*   Updated: 2025/11/04 20:12:10 by bolcay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <ctime>
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
        Zombie( std::string n )
        {
            name = n;
            // std::cout << n << ": BraiiiiiiinnnzzzZ..." << std::endl;
        }
        void	announce( void );
};

void    randomChump( std::string name);
Zombie *newZombie( std::string name);

#endif