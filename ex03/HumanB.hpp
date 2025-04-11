/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaizel <jmaizel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:08:50 by jmaizel           #+#    #+#             */
/*   Updated: 2025/04/11 14:08:51 by jmaizel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "HumanA.hpp"
#include"weapon.hpp"

class HumanB
{
    private:
    std::string name;
    Weapon* weapon;

    public:
    HumanB(std::string name);
    void setWeapon(Weapon& weapon);
    void attack(void);

};

#endif