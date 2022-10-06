#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public :
	
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & c);
	ScavTrap &operator=(ScavTrap const & c);
	~ScavTrap(void);
	
	void	guardGate(void);
	void	attack(const std::string & target);
	
	protected :

	int	_gate;

	private :
	
};

#endif
