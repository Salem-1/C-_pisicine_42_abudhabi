/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalem <ahsalem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:16:46 by ahsalem           #+#    #+#             */
/*   Updated: 2022/12/13 14:03:23 by ahsalem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phonebook.h"
#include <iostream>

void	Contact::set_name(std::string *name, std::string message)
{
	std::cout << message;
	getline(std::cin, *name);
	if ((*name).length() > 35)
		err_name(name);
	else if (std::cin.fail())
	{
		std::cout << "Error in recieving input, will close the program" << std::endl;
		exit(1);
	}
}

void	Contact::err_name(std::string *name)
{
	std::cout << "\n\nthe longest name in history is Wolfeschlegelsteinhausenbergerdorff\n" << std::endl;
	std::cout << "It seems you have longer name, your name should be recorded in genius";
	std::cout << " not here\nFor now I will store the first 35 char of your malicous string\n\n";
	*name = (*name).std::string::substr(0, 35);
}

void	Contact::set_darkest_secret(void)
{
	std::cout << "Darkest secret:";
	getline(std::cin, Contact::darkest_secret);
	if (Contact::darkest_secret.length() > 55)
		err_darkest_secret();
	else if (std::cin.fail())
	{
		std::cout << "Error in recieving input, will close the program" << std::endl;
		exit(1);
	}
}



void	Contact::err_darkest_secret(void)
{
	std::cout << "\n\nDamn, this is a long secret\n" << std::endl;
	std::cout << "Bro this is program from 80's, will save only first 500 chars from your darkside\n";
	std::cout << "Keep the rest for your next  psychiatry consultation\n\n";
	Contact::darkest_secret = Contact::darkest_secret.std::string::substr(0, 500);
}