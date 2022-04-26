#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap{
	private:
		std::string _Name;
		int	_Hit;
		int	_Energy;
		int	_Damage;

	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &inst);
		~ClapTrap(void);
		ClapTrap & operator =(ClapTrap const &inst);
		std::string	getName() const;
		int	getHitPoints() const;
		int	getEnergyLevel() const;
		int	getAttackDamage() const;	
		void status(void) const;
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif