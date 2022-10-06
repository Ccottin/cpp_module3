#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{	
	{
		FragTrap	one;

		one.highFivesGuys();
	}

	FragTrap	one("One");
	ClapTrap	two("Two");
	ScavTrap	three("Three");	

	one.attack("Two");
	two.takeDamage(one.getDmg());
	two.beRepaired(100);
	one.attack("Three");
	three.takeDamage(one.getDmg());
	three.guardGate();
	while (one.getEp() > 0)
	{
		if (three.getHp() < 40) //value to change 
			three.beRepaired(100);
		one.attack("Three");
		three.takeDamage(one.getDmg());
	}
	one.attack("Three");
	if (three.getHp() > 0)
	{
		std::cout << three.getClassName() << " " << three.getName()
		<< " did a great job keeping the door! Still having "
		<< three.getHp() << " hp and " << three.getEp() 
		<< " ep" << std::endl;
	}
	else
		std::cout << one.getClassName() << " " << one.getName()
		<< " broke "  << three.getClassName() << " " << three.getName()
		<< " who didn't stand a chance..." << std::endl;		
}
