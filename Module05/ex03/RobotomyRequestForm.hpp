/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:19:20 by avan-bre          #+#    #+#             */
/*   Updated: 2022/05/26 14:39:36 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public AForm{
	private:
		std::string	_target;

	public: 
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &inst);
		RobotomyRequestForm & operator = (const RobotomyRequestForm &inst);
		~RobotomyRequestForm(void);
		
		void	execute(Bureaucrat const & executor);
		std::string	getTarget(void) const;
};

#endif