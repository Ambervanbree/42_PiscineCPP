#include "Zombie.hpp"

int	main(void){
	Zombie	*hordeEva;
	hordeEva = zombieHorde(20, "Eva");
	delete [] hordeEva;
}
