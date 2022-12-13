/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:16:43 by ahsalem           #+#    #+#             */
/*   Updated: 2022/12/13 14:01:27 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	PhoneBook
{

};
class	Contact
{
	public:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	darkest_secret;
		std::string	phone;

		void		set_name(std::string *name, std::string message);
		void		err_name(std::string *name);
		void		set_darkest_secret(void);
		void		err_darkest_secret(void);

	
};