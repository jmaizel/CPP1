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