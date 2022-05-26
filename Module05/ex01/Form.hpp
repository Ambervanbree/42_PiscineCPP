/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:37:33 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/26 11:07:45 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class Form{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_minSigningGrade;
		const int			_minExecutingGrade;
	
	public:
		Form(void);
		Form(std::string name, int sign, int execute);
		Form(const Form &inst);
		Form & operator =(const Form &inst);
		~Form(void);

		std::string	getName() const;
		bool		isSigned() const;
		int			getMinSigningGrade() const;
		int			getMinExecutingGrade() const;
		
		void		beSigned(Bureaucrat &bureaucrat);

		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw();		
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw();	
		};
		class BureacratGradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw();				
		};
		class AlreadySigned : public std::exception{
			public:
				virtual const char* what() const throw();				
		};
};

std::ostream & operator <<(std::ostream &o, Form const &inst);

#endif