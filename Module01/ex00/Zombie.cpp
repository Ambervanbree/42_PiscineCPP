#include "Zombie.hpp"

Zombie::Zombie(std::string Name) : _name(Name){
	std::cout << "Zombie born: " << this->_name << std::endl;
}

Zombie::~Zombie(void){
	std::cout << "Zombie died: " << this->_name << std::endl;
}

void	Zombie::announce(void) const{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
