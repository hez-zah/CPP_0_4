#include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
    Zombie  *zombie;

    zombie = new Zombie();
    zombie->set_name(name);
    return (zombie);
}
