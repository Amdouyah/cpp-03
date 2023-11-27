#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("bom");
    claptrap.attack("dddddd");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.attack("ppppp");
    claptrap.takeDamage(12);

    return 0;
}