#include <iostream>
#include <string>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	one("Robert");
	ClapTrap	two("Georges");
	ClapTrap	three;

	one.attack("Georges");
	two.takeDamage(5);
	two.beRepaired(7);
	one.beRepaired(11);
	two.attack("Robert");
	one.takeDamage(0);
	one.attack("Georges");
	one.attack("Georges");
	one.attack("Georges");
	one.attack("Georges");
	one.attack("Georges");
	one.attack("Georges");
	one.attack("Georges");
	one.attack("Georges");
	one.attack("Georges");
	one.attack("Georges");
	three = one;
	three.attack("Nothing");
	two.takeDamage(11);
	two.beRepaired(10);
}
