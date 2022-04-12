#include <iostream>

class Zombie{

	private:
		std::string	_name;

	public:
		Zombie();
		~Zombie();

		void	announce(void) const;
		void	setName(std::string input);
};

Zombie* zombieHorde(int N, std::string name);
