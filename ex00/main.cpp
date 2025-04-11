/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaizel <jmaizel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:07:51 by jmaizel           #+#    #+#             */
/*   Updated: 2025/04/11 14:07:51 by jmaizel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* NewZombie(std::string name)
{
	Zombie* zombie = new Zombie(name);
	return zombie;
}

void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}

int main ()
{
	std::cout << "Creation d'un zombie sur la pile :"<<std::endl;
	randomChump("Zombie_stack");
	std::cout << "\nCreation d'un zombie sur le tas :" << std::endl;
	Zombie* heap_zombie = NewZombie("Zombie_Heap");
	heap_zombie->announce();

	delete heap_zombie;
	return (0);
}