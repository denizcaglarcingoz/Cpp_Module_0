#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main()
{
	std::string	Input;
	std::string	Search = "SEARCH";
	std::string	Add = "ADD";
	std::string	Exit = "EXIT";
	PhoneBook	phoneBook;

	std::cout << "Welcome to the Crappy Awesome PhoneBook" << std::endl;
	std::cout << "Commans to Input (SEARCH, ADD, EXIT): " << std::endl;

	while(1)
	{
		std:: cout << "Input Time:";
		if (!(std::getline(std::cin, Input)))
			eofExit();
		if (Input == Search)
			phoneBook.searchContact();
		else if (Input == Add)
			phoneBook.addContact();
		else if (Input == Exit)
			break;
		else
			std::cout << "Invalid command. Please enter SEARCH, ADD, or EXIT." << std::endl;
	}
	return (0);
}