#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main()
{
	std::string Input;
	std::string Search = "SEARCH";
	std::string Add = "ADD";
	std::string Exit = "EXIT";
	PhoneBook phoneBook;

	std::cout << "Welcome to the Crappy Awesome PhoneBook" << std::endl;
	
	while(1)
	{
		std::cin >> Input;
		if (Input == Search)
			std::cout << Input << std::endl;
		else if (Input == Add)
		{
			std::cout << Input << std::endl;
			phoneBook.addContact();
		}
		else if (Input == Exit)
			break;
	}
	return (0);
}