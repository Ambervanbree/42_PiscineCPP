#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _Name(name), _Hit(10), _Energy(10), _Damage(0){
	std::cout << "ClapTrap " << this->_Name << " initialised" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &inst){
	std::cout << "ClapTrap " << this->_Name << " copied" << std::endl;
	*this = inst;
	return ;
}

ClapTrap::~ClapTrap(void){
	std::cout << "Claptrap " << this->_Name << " destroyed" << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator =(ClapTrap const &inst){
	std::cout << "Claptrap " << this->_Name << " copied" << std::endl;
	this->_Name = inst.getName();
	this->_Hit = inst.getHitPoints();
	this->_Energy = inst.getEnergyLevel();
	this->_Damage = inst.getAttackDamage();
	return *this;
}

std::string	ClapTrap::getName() const {
	return (this->_Name);
}

int	ClapTrap::getHitPoints() const {
	return (this->_Hit);
}

int	ClapTrap::getEnergyLevel() const {
	return (this->_Energy);
}

int	ClapTrap::getAttackDamage() const {
	return (this->_Damage);
}


void ClapTrap::attack(const std::string &target){
	if (this->_Energy <= 0){
		std::cout << "ClapTrap " << this->_Name << " doesn't have enough energy points to attack." << std::endl;
	}
	else if (this->_Hit <= 0){
		std::cout << "ClapTrap " << this->_Name << " doesn't have enough hit points to attack." << std::endl;
	}
	else{
		this->_Energy--;
		std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " \
		<< this->_Damage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->_Hit <= 0){
		std::cout << "ClapTrap " << this->_Name << " is already dead." << std::endl;
	}
	else {
		std::cout << "ClapTrap " << this->_Name << " loses " << amount << " points of damage!" << std::endl;		
		this->_Hit -= amount;
		if (this->_Hit <= 0){
			this->_Hit = 0;
			std::cout << "ClapTrap " << this->_Name << " took its final blow." << std::endl; 
		}
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_Energy <= 0){
		std::cout << "ClapTrap " << this->_Name << "doesn't have enough energy points to repair itself." << std::endl;
	}
	else if (this->_Hit <= 0){
		std::cout << "ClapTrap " << this->_Name << "doesn't have enough hit points to repair itself." << std::endl;
	}
	else{
		this->_Energy--;
		this->_Hit += amount;
		std::cout << "ClapTrap " << this->_Name << " is repaired with " << amount << " hit points." << std::endl;
	}
}

void ClapTrap::status(void) const{
	std::cout << "ClapTrap " << this->_Name << " has " << \
	this->_Hit << " hit points, " << \
	this->_Energy << " energy points, and " << \
	this->_Damage << " damage points." << std::endl;
}