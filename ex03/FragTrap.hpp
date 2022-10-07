#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class FragTrap :virtual public ClapTrap {

	public :
	
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & c);
	FragTrap &operator=(FragTrap const & c);
	~FragTrap(void);
	
	void	highFivesGuys(void);
	
	private :

};

#endif
