/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:37:33 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/24 18:00:28 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <fstream>

class Bureaucrat;

class AForm{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_minSigningGrade;
		const int			_minExecutingGrade;
	
	public:
		AForm(void);
		AForm(std::string name, int sign, int execute);
		AForm(const AForm &inst);
		AForm & operator =(const AForm &inst);
		virtual ~AForm(void);

		std::string	getName() const;
		bool		isSigned() const;
		void		setSigned(bool sign);
		int			getMinSigningGrade() const;
		int			getMinExecutingGrade() const;
		
		void			beSigned(Bureaucrat &bureaucrat);
		bool			executeOK(Bureaucrat const &bureaucrat);
		virtual void	execute(Bureaucrat const & executor) = 0;
	
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
		class NotSignedYet : public std::exception{
			public:
				virtual const char* what() const throw();				
		};
		class CouldNotOpenFile : public std::exception{
			public:
				virtual const char* what() const throw();				
		};
};

std::ostream & operator <<(std::ostream &o, AForm const &inst);

#endif