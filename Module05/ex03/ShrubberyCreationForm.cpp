/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:15:39 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/26 12:44:52 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : 
	AForm("Shrubbery Creation Form", 145, 137),
	_target("Random Location"){
	std::cout << GREEN << "Default constructor Shrubbery Creation Form called" << RESET << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	AForm("Shrubbery Creation Form", 145, 137),
	_target(target){
	std::cout << GREEN << "Parametrised constructor Shrubbery Creation Form called" << RESET << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &inst) :
	AForm(inst.getName(), 145, 137),
	_target(inst.getTarget()){
	std::cout << GREEN << "Copy constructor Shrubbery Creation Form called" << RESET << std::endl;
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &inst){
	if (this != &inst){
		this->_target = inst._target;
		this->setSigned(inst.isSigned());
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
	std::cout << GREEN << "Destructor Shrubbery Creation Form called" << RESET << std::endl;
	return ;	
}

std::string	ShrubberyCreationForm::getTarget(void) const{
	return this->_target;
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor){
	this->executeOK(executor);
	std::string		fileName(this->_target);
	fileName.append("_shrubbery");
	std::ofstream	ofs;
	
	ofs.open(fileName.c_str(), std::ios_base::app);
	if (ofs.is_open()){
		for (int i = 0; i < 2; i++){
			ofs << " \
\n             _{\\ _{\\{\\/}/}/}__ \
\n           {/{/\\}{/{/\\}(\\}{/\\} _ \
\n           {/{/\\}{/{/\\}(_)\\}{/{/\\}  _ \
\n        {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\} \
\n       {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/} \
\n      _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/} \
\n     {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\} \
\n     _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\} \
\n    {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\} \
\n     {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/} \
\n      {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_) \
\n     {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/} \
\n      {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\} \
\n        {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\} \
\n         (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_) \
\n         (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_) \
\n           {/{/{\\{\\/}{/{\\{\\{\\(_)/} \
\n            {/{\\{\\{\\/}/}{\\{\\\\}/} \
\n             {){/ {\\/}{\\/} \\}\\} \
\n                  \\.-'.-/ \
\n         __...--- |'-.-'| --...__ \
\n  _...--      '   |'-.-'|  ' -.  ""--..__ \
\n-     ' .  . '    |.'-._| '  . .  '   \
\n.  '-  '    .--'  | '-.'|    .  '  . ' \
\n         ' ..     |'-_.-| \
\n .  '  .       _.-|-._ -|-._  .  '  . \
\n             .'   |'- .-|   '. \
\n ..-'   ' .  '.   `-._.-´   .'  '  - . \
\n  .-' '        '-._______.-'     '  . \
\n       .      ~," << std::endl;
}
		ofs.close();
		std::cout << "\U00002705 " << executor.getName() << " executed " << this->getName() << std::endl;
	}
	else{
		throw AForm::CouldNotOpenFile();
	}
	return ;
}

