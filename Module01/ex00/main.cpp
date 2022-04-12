#include "Zombie.hpp"

int	main(void){
	// Pointer to heap
	Zombie	*ZombiePtr;
	// Creating zombie on Heap
	ZombiePtr = newZombie("Sophie");
	// Creating zombie on stack
	randomChump("Amb-ARRRR");
	// Zombie on heap is still alive
	ZombiePtr->announce();
	// Deleting zombie on Heap
	delete ZombiePtr;
}