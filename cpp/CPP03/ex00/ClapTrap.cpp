#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):name(name),hit_p(10),energy_p(10),at_dmg(0)
{
    std::cout << "Called constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Called destructor" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->hit_p && this->energy_p)
    {
        this->energy_p -=1;
        this->hit_p -=1;
        std::cout << "ClapTrap " << this->name << " attacks "
        << target << ", causing" << this->at_dmg
        << " points of damage!" << std::endl;
    }
    else
        std::cout << " ClapTrap can't attack" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    (void)amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (!this->hit_p || !this->energy_p)
    {
        std::cout << "ClapTrap can't repairs itself";
        return ;
    }
    this->hit_p +=amount;
    this->energy_p -=1;
    std::cout << "ClapTrap repairs itself" << std::endl;
}

//ClapTrap <name> attacks <target>, causing <damage> points of damage!
