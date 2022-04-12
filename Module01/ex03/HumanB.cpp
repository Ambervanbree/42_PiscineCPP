#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
	_weaponPTR = NULL;
	std::cout << "HumanB was created: " << this->_name << std::endl;
}

HumanB::~HumanB(void){
	std::cout << "HumanB was destroyed: " << this->_name << std::endl;
}

void HumanB::attack(void) const{
	std::cout << this->_name << " attacks with their " << this->_weaponPTR->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon){
	this->_weaponPTR = &weapon;
}