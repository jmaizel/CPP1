#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string name;

public:
    Zombie(std::string zombie_name); // Constructeur
    ~Zombie(); // Destructeur
    void announce(void);
};

#endif