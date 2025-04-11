/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaizel <jmaizel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:07:58 by jmaizel           #+#    #+#             */
/*   Updated: 2025/04/11 14:07:58 by jmaizel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"


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