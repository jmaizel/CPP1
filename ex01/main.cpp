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
    int n = 5;  // Nombre de zombies dans la horde
    std::string zombie_name = "ZombieHorde";
    
    // Créer une horde de 5 zombies appelés "ZombieHorde"
    Zombie* horde = ZombieHorde(n, zombie_name);
    
    // Faire annoncer chaque zombie
    for (int i = 0; i < n; i++)
    {
        std::cout << "Zombie " << i << " s'annonce: ";
        horde[i].announce();
    }
    
    // Libérer la mémoire - TRÈS IMPORTANT d'utiliser delete[]
    delete[] horde;
    
    return (0);
}