/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaizel <jmaizel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:08:07 by jmaizel           #+#    #+#             */
/*   Updated: 2025/04/14 18:25:19 by jmaizel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex01/zombie.hpp"

Zombie *ZombieHorde(int N, std::string name)
{
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return horde;
}

int main(void)
{
    int n = 5; 
    std::string zombie_name = "ZombieHorde";
    Zombie* horde = ZombieHorde(n, zombie_name);
    for (int i = 0; i < n; i++)
    {
        std::cout << "Zombie " << i << " s'annonce: ";
        horde[i].announce();
    }
    delete[] horde;
    return (0);
}