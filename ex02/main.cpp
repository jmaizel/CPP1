/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaizel <jmaizel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:08:24 by jmaizel           #+#    #+#             */
/*   Updated: 2025/04/11 14:08:25 by jmaizel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    
    std::cout << "Adresse de str: " << &str << std::endl;
    std::cout << "Adresse contenue dans stringPTR: " << stringPTR << std::endl;
    std::cout << "Adresse de stringREF: " << &stringREF << std::endl;

 
    std::cout << "Valeur de str: " << str << std::endl;
    std::cout << "Valeur pointée par stringPTR: " << *stringPTR << std::endl;
    std::cout << "Valeur de stringREF: " << stringREF << std::endl;

    return 0;
}