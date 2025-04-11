/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaizel <jmaizel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:08:41 by jmaizel           #+#    #+#             */
/*   Updated: 2025/04/11 14:08:42 by jmaizel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "weapon.hpp"

class HumanA
{
    private:
    std::string name;
    Weapon& weapon;


    public:
    HumanA(std::string name, Weapon& weapon);
    void attack(void);

};

#endif