/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-bre <avan-bre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 15:02:21 by avan-bre          #+#    #+#             */
/*   Updated: 2022/06/01 15:11:48 by avan-bre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <iostream>
# include <iostream>
# include <string>
# include <locale>
# include <cstdlib>

typedef	struct s_data{
	char	c;
	int		n;
	float	f;
	double	d;
	std::string	cString;
	std::string	nString;
	std::string	fString;
	std::string	dString;
} t_data;

void	setChar(const char c, t_data *data);
void	setInt(const char *argument, t_data *data);
void	setFloat(const char *argument, t_data *data);
void	setDouble(const char *argument, t_data *data);
void	setWrongArgument(t_data *data);
void	display(t_data);

#endif