#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon) : _name(name), _weaponREF(weapon){
	std::cout << "HumanA " << this->_name << " has been outfitted with a " << this->_weaponREF.getType() << std::endl;
}

HumanA::~HumanA(void){
	std::cout << "Human A was destroyed" << std::endl;
}

void HumanA::attack(void){
	std::cout << this->_name << " attacks with their " << this->_weaponREF.getType() << std::endl;
}
