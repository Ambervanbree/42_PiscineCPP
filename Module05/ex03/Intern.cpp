#include "Intern.hpp"

Intern::Intern(void) {
	this->_forms[0] = "Presidential Pardon Form";
	this->_forms[1] = "Shrubbery Creation Form";
	this->_forms[2] = "Robotomy Request Form";
	this->_formFunctions[0] = & Intern::createPresidentialPardonForm;
	this->_formFunctions[1] = & Intern::createShrubberyCreationForm;
	this->_formFunctions[2] = & Intern::createRobotomyRequestForm;
	std::cout << CYAN << "Default constructor Intern called" << RESET << std::endl;
	return ;
}

Intern::Intern(const Intern &inst){
	std::cout << CYAN << "Copy constructor Intern called" << RESET << std::endl;
	*this = inst;
	return ;
}

Intern & Intern::operator =(const Intern & inst){
	std::cout << CYAN << "Assignment operator Intern called" << RESET << std::endl;
	for (int i = 0; i < 3; i++){
		this->_forms[i] = inst._forms[i];
	}	
	return *this;
}

Intern::~Intern(void){
	std::cout << CYAN << "Destructor Intern called" << RESET << std::endl;
	return ;
}

AForm * Intern::makeForm(std::string formName, std::string formTarget){
	for (int i = 0; i < 3; i++){
		if (formName == this->_forms[i]){
			std::cout << "Intern creates " << formName << std::endl;
			return (this->*_formFunctions[i])(formTarget);
		}
	}
	throw FormDoesNotExist();
	return NULL;
}

AForm * Intern::createPresidentialPardonForm(std::string target) const{
	return (new PresidentialPardonForm(target));
}

AForm * Intern::createShrubberyCreationForm(std::string target) const{
		return (new ShrubberyCreationForm(target));
}

AForm * Intern::createRobotomyRequestForm(std::string target) const{
	return (new RobotomyRequestForm(target));
}

const char* Intern::FormDoesNotExist::what() const throw(){
	return "requested form does not exist";
}
