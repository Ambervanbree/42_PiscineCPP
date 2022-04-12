#include "Zombie.hpp"

Zombie* newZombie(std::string name){
	Zombie*	New = new Zombie(name);
	return (New);
}
