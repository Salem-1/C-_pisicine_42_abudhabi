Turn files: .cpp , .h, Makefile

1-No dynamic allocation
2-No empty fields
3-If len>10 last 10char display as .
Salemovec.
4-Class design as follows:
	class Contacts
	-Stands for phonebook contacts

	class PhoneBook
	1-Array of contacts
	2-Store maximum 8 contacts
	3-FIFO

5-Anything always used inside a class is private
6-Anything used outside the class if public


7-Behavior:
Any other input is discarded
./phonebook
	Welcome to the awesome phonebook!
	How can I help you?
	To add contact type        : ADD
	To search for contact type : search
	To exit the program type   :EXIT

OTHER input is discarded

	Welcome to the awesome phonebook!
	How can I help you?
	To add contact type        : ADD
	To search for contact type : search
	To exit the program type   :EXIT

For adding holds only 8 contacts, otherwise, FIFO, also check for the added input if it's more than longest name ever: 
for long names:
longest_name = "Wolfeschlegelsteinhausenbergerdorff"
ref = "https://en.wikipedia.org/wiki/Hubert_Blaine_Wolfeschlegelsteinhausenbergerdorff_Sr."
cout<< "the longest name in history is" << longest name << "ref" << ref
cout << "I don't believe you have a longer name, if so record your name as genius record, for now sorry I don't have enough memory for your name:( ">>

for darkest secrets:
if > 500;
cout << "this is a big secret I am not able to save in my memory, please summarize your secret in under 500 char, otherwise go consult psychaitrist"<< edl

for phone:
if no number 
cout << "what a wired phone number with no digits, anyway will save it for you, But I warn you, you try to trick me again , I will come after you :)">>
	ADD
	First name:
	Last name:
	Nickname:
	Phone number:
	Darkest Secret:

	SEARCH
	Index     |First name|Last name | Nickname |
	10char_la.|10char    |10char    |10char    |
	
	Please enter your needed contact index:
	9
	Sorry contact index is out of rang:
	sleep(1)
	Please enter your needed contact index:
	2

	First name: Jane
	Last name: Doe
	Nickname: Abo Doe
	Phone number: +971-554-488-93
	Darkest Secret: I hate using my name as example in all programs

	sleep(5)

	Welcome to the awesome phonebook!
	How can I help you?
	To add contact type        : ADD
	To search for contact type : search
	To exit the program type   :EXIT

close the program without saving
	EXIT


helpful functions:
#include <iostream>
#include <string>

int main ()
{
  std::string name;

  std::cout << "Please, enter your full name: ";
  std::getline (std::cin,name);
  std::cout << "Hello, " << name << "!\n";

  return 0;


What is the meaning of instance of a class?
Means using the class like 
Car bmcar
bmcar.name = "BMW"

#include <cstring>

size_t strlen ( const char * str );
int strcmp ( const char * str1, const char * str2 );