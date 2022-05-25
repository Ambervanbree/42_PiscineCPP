/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:53:42 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/24 16:56:32 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public AForm{
	private:
		std::string	_target;

	public: 
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string name, std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &inst);
		PresidentialPardonForm & operator = (const PresidentialPardonForm &inst);
		~PresidentialPardonForm(void);
		
		void		execute(Bureaucrat const & executor);
		std::string	getTarget(void) const;
};

#endif