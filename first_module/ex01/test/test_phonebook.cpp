#include <iostream>
#include "../phonebook.h"
#include "../contact.h"

int main(void)
{
	PhoneBook	phonebook;
	Contact		contact;

	contact.set_name(&contact.first_name, "First name: ");
	contact.set_name(&contact.last_name, "Last name: ");
	contact.set_name(&contact.nickname, "Nickname: ");
	contact.set_darkest_secret();
	contact.set_phone();
	// contact.phone = "+971 58590 7154";
	std::cout << "First name: " << contact.first_name << std::endl; 
	std::cout << "Last name: " << contact.last_name << std::endl; 
	std::cout << "Nickname: " << contact.nickname << std::endl; 
	std::cout << "Darkest secret: " << contact.darkest_secret << std::endl; 
	std::cout << "Phone number: " << contact.phone << std::endl; 
}