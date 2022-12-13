/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:16:43 by ahsalem           #+#    #+#             */
/*   Updated: 2022/12/13 14:20:18 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Contact
{
	public:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	darkest_secret;
		std::string	phone;

	/*----------------=======------SETTERS--------------======------------*/
		void		set_name(std::string *name, std::string message);
		void		set_darkest_secret(void);
		void		set_phone(void);

	/*----------------=======------ERRORS-------------======------------*/
		void		err_name(std::string *name);
		void		err_darkest_secret(void);
		void		err_phone(void);
		void		empty_field_message(void);
	
};