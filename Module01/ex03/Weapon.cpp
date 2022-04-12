#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type = "Default"){
	std::cout << "A weapon is created" << std::endl;
}

Weapon::~Weapon(void){
	std::cout << "A weapon has been destroyed" << std::endl;
}

const std::string &Weapon::getType(void){
	return _type;
}

void Weapon::setType(std::string newType){
	this->_type = newType;
	return ;
}
