/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaizel <jmaizel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:08:15 by jmaizel           #+#    #+#             */
/*   Updated: 2025/04/11 14:08:15 by jmaizel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie()
{
    name = "";
   
}

Zombie::Zombie(std::string zombie_name)
{
    name = zombie_name;
    std::cout << "Zombie " << name << " a été créé" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " a été détruit" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string zombie_name)
{
    name = zombie_name;
}
Zombie* newZombie(std::string name)
{
	Zombie* zombie = new Zombie(name);
	return zombie;
}

void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}