#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern{
	private:
		std::string	_forms[3];
		AForm *	(Intern::*_formFunctions[3])(std::string target) const;
		AForm * createPresidentialPardonForm(std::string target) const;
		AForm * createShrubberyCreationForm(std::string target) const;
		AForm * createRobotomyRequestForm(std::string target) const;
	
	public:
		Intern(void);
		Intern(const Intern &inst);
		Intern & operator =(const Intern & inst);
		~Intern(void);

		AForm * makeForm(std::string formName, std::string formTarget);

		class FormDoesNotExist : public std::exception{
			public:
				virtual const char* what() const throw();				
		};
};

#endif