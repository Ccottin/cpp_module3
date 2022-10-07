#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

    public :
	DiamondTrap(void) : ClapTrap(void), FragTrap(void), ScavTrap(void);
	DiamondTrap(std::string _name) : ClapTrap(std::string name), FragTrap(void), ScavTrap(void);
	DiamondTrap(DiamondTrap const &d);
	DimaondTrap &operator=(DiamondTrap const &d);
    	
	void	whoAmI(void);
	using	ScavTrap::attack(void);

	protected :
	
	std::string	_className;
	using		FragTrap::_maxHp;

    private :

	std::string	_name;
	std::string	_clap_name;
	
	using		FragTrap::_hp;
	using		ScavTrap::_ep;
	using		FragTrap::_dmg;
};

#endif
