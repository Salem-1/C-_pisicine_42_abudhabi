/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_errs.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:21:21 by ahsalem           #+#    #+#             */
/*   Updated: 2022/12/13 14:22:57 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"
#include "contact.h"
#include <iostream>

void	Contact::err_name(std::string *name)
{
	std::cout << "\n\nthe longest name in history is Wolfeschlegelsteinhausenbergerdorff\n" << std::endl;
	std::cout << "It seems you have longer name, your name should be recorded in genius";
	std::cout << " not here\nFor now I will store the first 35 char of your malicous string\n\n";
	*name = (*name).std::string::substr(0, 35);
}



void	Contact::err_darkest_secret(void)
{
	std::cout << "\n\nDamn, this is a long secret\n" << std::endl;
	std::cout << "Bro this is program from 80's, will save only first 500 chars from your darkside\n";
	std::cout << "Keep the rest for your next  psychiatry consultation\n\n";
	Contact::darkest_secret = Contact::darkest_secret.std::string::substr(0, 500);
}

void	Contact::err_phone(void)
{
	std::cout << "\n\nReally, this is your phone!" << std::endl;
	std::cout << "What a long number?!\n";
	std::cout << "will save only 30 characters, write the rest on a paper Mr smart user\n\n";
	Contact::darkest_secret = Contact::darkest_secret.std::string::substr(0, 30);
}

void	Contact::empty_field_message(void)
{
	std::cout << "Please enter valid value then press Enter!" << std::endl;
}