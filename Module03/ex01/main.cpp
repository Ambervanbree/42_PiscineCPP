#include "ClapTrap.hpp"

int	main(void){
	ClapTrap	harry("Harry");
	ClapTrap	henk("Henk");

	henk.attack("Harry");
	henk.attack("Harry");
	henk.attack("Harry");
	henk.status();
	henk.beRepaired(3);
	harry.status();
	harry.takeDamage(11);
	harry.status();
	harry.beRepaired(2);
	harry.status();
}