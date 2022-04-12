#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(std::string Name);
		~Zombie();

		void	announce(void) const;
};

void	randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif