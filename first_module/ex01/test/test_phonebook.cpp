
#include "../phonebook.hpp"

void	test_contact(void);

int main(void)
{
	PhoneBook	phonebook;
	phonebook.start();
	// test_contact();
}

void	test_contact(void)
{
	Contact		contacts[8];
	Contact		contact;

	contacts[0] = contact;
	// contact.fill_contact_details();
	// contacts[0].set_name(&contacts[0].first_name, "First name: ");
	// contacts[0].set_name(&contacts[0].last_name, "Last name: ");
	// contacts[0].set_name(&contacts[0].nickname, "Nickname: ");
	// contacts[0].set_darkest_secret();
	// contacts[0].set_phone();
	// contact.phone = "+971 58590 7154";
	// std::cout << "First name: " << contacts[0].first_name << std::endl; 
	// std::cout << "Last name: " << contacts[0].last_name << std::endl; 
	// std::cout << "Nickname: " << contacts[0].nickname << std::endl; 
	// std::cout << "Darkest secret: " << contacts[0].darkest_secret << std::endl; 
	// std::cout << "Phone number: " << contacts[0].phone << std::endl; 
}