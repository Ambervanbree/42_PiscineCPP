#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){
	std::cout << "Weapon " << this->_type << " has been created" << std::endl;
}

Weapon::~Weapon(void){
	std::cout << "Weapon " << this->_type << " has been destroyed" << std::endl;
}

const std::string &Weapon::getType(void){
	return _type;
}

void Weapon::setType(std::string newType){
	this->_type = newType;
	return ;
}
