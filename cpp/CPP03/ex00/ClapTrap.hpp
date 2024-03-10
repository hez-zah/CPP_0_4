#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        const std::string name;
        unsigned int hit_p;
        unsigned int energy_p;
        unsigned int at_dmg;
    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};



#endif
