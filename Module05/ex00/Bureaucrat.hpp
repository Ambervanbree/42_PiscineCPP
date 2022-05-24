/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:04:02 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/23 15:39:47 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define RESET   "\033[0m"
# define GREEN	 "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define CYAN    "\033[36m"
# define RED     "\033[31m"
# define MAGENTA "\033[35m"
# define BOLD    "\e[1m"
# define NOBOLD  "\e[0m"

# include <iostream>

class Bureaucrat{
	private:
		std::string const	_name;
		int					_grade;
	
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &inst);
		Bureaucrat & operator =(const Bureaucrat &inst);
		~Bureaucrat(void);

		std::string getName(void) const;
		int 		getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);

		class	GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw();			
		};
};

std::ostream & operator <<(std::ostream &o, Bureaucrat const &inst);

#endif