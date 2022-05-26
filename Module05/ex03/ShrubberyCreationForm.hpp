/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:20:02 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/26 12:45:23 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public AForm{
	private:
		std::string	_target;

	public: 
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &inst);
		ShrubberyCreationForm & operator = (const ShrubberyCreationForm &inst);
		~ShrubberyCreationForm(void);
		
		void	execute(Bureaucrat const & executor);
		std::string	getTarget(void) const;
};

#endif