/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:16:46 by ahsalem           #+#    #+#             */
/*   Updated: 2022/12/13 14:21:45 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"
#include "contact.h"
#include <iostream>

void	Contact::set_name(std::string *name, std::string message)
{
	std::cout << message;
	getline(std::cin, *name);
	if (std::cin.fail())
	{
		std::cout << "Error in recieving input, will close the program" << std::endl;
		exit(1);
	}
	if ((*name).length() == 0)
	{
		Contact::empty_field_message();
		set_name(name, message);
	}
	else if ((*name).length() > 35)
		err_name(name);
}


void	Contact::set_darkest_secret(void)
{
	std::cout << "Darkest secret:";
	getline(std::cin, Contact::darkest_secret);
	if (std::cin.fail())
	{
		std::cout << "Error in recieving input, will close the program" << std::endl;
		exit(1);
	}
	if (Contact::darkest_secret.length() == 0)
	{
		Contact::empty_field_message();
		set_darkest_secret();
	}
	if (Contact::darkest_secret.length() > 500)
		err_darkest_secret();
}

void	Contact::set_phone(void)
{
	std::cout << "Phone number:";
	getline(std::cin, Contact::phone);
	if (std::cin.fail())
	{
		std::cout << "Error in recieving input, will close the program" << std::endl;
		exit(1);
	}
	if (Contact::phone.length() == 0)
	{
		Contact::empty_field_message();
		set_phone();
	}
	else if (Contact::phone.length() > 30)
		err_phone();
}