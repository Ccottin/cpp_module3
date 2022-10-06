#include <iostream>
#include <string>
#include "FragTrap.hpp"

/* Constructors, destructors, operators */

FragTrap::FragTrap(void) {
	std::cout << "Default constructor is summoning a mighty default"
	" FragTrap " << std::endl;
	setName("default");
	setClassName("FragTrap");
	setHp(100);
	setEp(100);
	setDmg(30);
	this->_maxHp = 100;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "Default constructor is summoning a mighty FragTrap " 
	<< name << std::endl;
	setName(name);
	setClassName("FragTrap");
	setHp(100);
	setEp(100);
	setDmg(30);
	this->_maxHp = 100;
}

FragTrap::FragTrap(FragTrap const & c) {
	std::cout << "Copy constructor copies a mighty FragTrap" << std::endl;
	if (this != &c)
	{
		setName(c.getName());
		setHp(c.getHp());
		setEp(c.getEp());
		setDmg(c.getDmg());
		setClassName(c.getClassName());
		_maxHp = c._maxHp;
	}
}

FragTrap &FragTrap::operator=(FragTrap const & c) {
	std::cout << "Copy assignement constructor assigns a mighty FragTrap" 
	<< std::endl;

	if (this != &c)
	{
		setName(c.getName());
		setHp(c.getHp());
		setEp(c.getEp());
		setDmg(c.getDmg());
		setClassName(c.getClassName());
		_maxHp = c._maxHp;
	}
	return (*this);
}

FragTrap::~FragTrap(void) { 
	std::cout << "FragTrap Destructor Called on "
	<< getName() << ". Kick, give him a high five!" << std::endl;
}

/* Member Function */

void	FragTrap::highFivesGuys(void) {
	if (getEp() > 0 && getHp() > 0)
	{
		std::cout << _className << " " << getName() 
		<< " is firmly asking for a high Five!" << std::endl;
		setEp(getEp() - 1);
	}
	else if (getHp() == 0)
	{
		std::cout <<  "FragTrap " << getName() 
		<< " is out of Hit Points" << std::endl;
	}
	else
		std::cout <<  "FragTrap " << getName() 
		<< " is out of energy :(" << std::endl;
}
