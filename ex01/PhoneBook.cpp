#include "PhoneBook.hpp"

void PhoneBook::print(int contactCount)
{
	printTill(this->contacts[contactCount].get_firstName());
	printTill(this->contacts[contactCount].get_lastName());
	printTill(this->contacts[contactCount].get_nickName());
	std::cout << std::endl;
}

void PhoneBook::printSpecific(int index)
{
	if (index < 0)
		index += 8;
	if (index >= this->contactFull)
	{
		std::cout << "There is no contact under this index";
		return ;
	}
	std::cout << "Input First Name: " << this->contacts[index].get_firstName() << std::endl;
	std::cout << "Input Last Name: " << this->contacts[index].get_lastName() << std::endl;
	std::cout << "Input Nick Name: " << this->contacts[index].get_nickName() << std::endl;
	std::cout << "Input Phone Number: " << this->contacts[index].get_phoneNumber() << std::endl;
	std::cout << "Input Darkest Secret: " << this->contacts[index].get_darkestSecret() << std::endl;
}

void PhoneBook::addContact(void)
{
	std::string input;

	this->contactCount %= 8;
	input = inputLoop("Input First Name: ");
	this->contacts[this->contactCount].set_firstName(input);
	input = inputLoop("Input Last Name: ");
	this->contacts[this->contactCount].set_lastName(input);
	input = inputLoop("Input Nick Name: ");
	this->contacts[this->contactCount].set_nickName(input);
	input = inputLoop("Input Phone Number: ");
	while (!isDigit(input))
	{
		std::cout << "Input is not a Number try again: ";
		if (!(std::getline(std::cin, input)))
			eofExit();
	}
	this->contacts[this->contactCount].set_phoneNumber(input);
	input = inputLoop("Input Darkest Secret: ");
	this->contacts[this->contactCount].set_darkestSecret(input);
	std::cout<<"New Contact Added!!!" << std::endl;
	this->contactFull++;
	this->contactCount += 1;
}

void PhoneBook::searchContact(void)
{
	int			contactIndex;
	int			full;
	std::string	input;
	int			index;

	std::cout << std::endl << "Welcome to Search" << std::endl;
	contactIndex = this->contactCount - 1;
	full = this->contactFull;
	if (contactIndex == -1)
			contactIndex = 7;
	index = 1;
	searchEntranceText();
	while(contactIndex != this->contactCount && full > 0)
	{
		std::cout << "|    "<< index << "     |";
		PhoneBook::print(contactIndex);
		if (contactIndex == 0)
			contactIndex = 8;
		full--;
		contactIndex--;
		index++;
		if (index == 9)
			break;
	}
	if (contactIndex == this->contactCount)
	{
		if (this->contacts[contactIndex].get_firstName().size() > 0)
		{
			std::cout << "|    "<< index << "     |";
			PhoneBook::print(contactIndex);
		}
	}
	std::cout << "Which contact info do you need? Please, enter the index number: ";
	if (!(std::getline(std::cin, input)))
		eofExit();
	while (!isDigit(input) || stringToInt(input) > 8 || stringToInt(input) < 1)
	{
		std::cout << "Input is not a correct. ";
		std::cout << "It can be only number and between 1 and 8: ";
		if (!(std::getline(std::cin, input)))
			eofExit();
	}
	PhoneBook::printSpecific((this->contactCount - stringToInt(input)));
	std::cout << std::endl;
}

PhoneBook::PhoneBook(void)
{
	this->contactCount = 0;
	this->contactFull = 0;
}
