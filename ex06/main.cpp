/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaizel <jmaizel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:53:48 by jmaizel           #+#    #+#             */
/*   Updated: 2025/04/14 13:53:50 by jmaizel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main (int ac, char **av)
{

    if (ac != 2)
    {
        if (ac > 0)
            std::cout << "Usage: " << av[0] << " [DEBUG/INFO/WARNING/ERROR]" << std::endl;
        else
            std::cout << "Usage: ./harl [DEBUG/INFO/WARNING/ERROR]" << std::endl;
        return (0);
    }
    Harl harl;
    harl.complain(av[1]);
    return (0);
}