#include "PhoneBook.hpp"

void PhoneBook::print(int contactCount)
{
	std::cout << "First Name: ";
	std::cout << this->contacts[contactCount].firstName << std::endl;
	std::cout << "Last Name: ";
	std::cout << this->contacts[contactCount].lastName << std::endl;
	std::cout << "Nick Name: ";
	std::cout << this->contacts[contactCount].nickName << std::endl;
	std::cout << "Phone Number: ";
	std::cout << this->contacts[contactCount].phoneNumber << std::endl;
	std::cout << "Darkest Secret: ";
	std::cout << this->contacts[contactCount].darkestSecret << std::endl;
}

void PhoneBook::addContact(void)
{
	std::string Input;
	int	inputPhoneN;

	this->contactCount += 1;

	
	std::cout << "Input First Name" << std::endl;
	std::cin.ignore(); 
	std::getline(std::cin, Input);
	this->contacts[this->contactCount].firstName = Input;
	std::cout << "Input Last Name" << std::endl;
	std::getline(std::cin, Input);
	this->contacts[this->contactCount].lastName = Input;
	std::cout << "Input Nick Name" << std::endl;
	std::getline(std::cin, Input);
	this->contacts[this->contactCount].nickName = Input;
	std::cout << "Input Phone Number" << std::endl;
	std::cin >> inputPhoneN;
	this->contacts[this->contactCount].phoneNumber = inputPhoneN;
	std::cout << "Input Darkest Secret" << std::endl;
	std::cin.ignore(); 
	std::getline(std::cin, Input);
	std::cin >> Input;
	this->contacts[this->contactCount].darkestSecret = Input;
	std::cout << this->contactCount << std::endl;
	PhoneBook::print(this->contactCount);
}

PhoneBook::PhoneBook(void)
{
	this->contactCount = 0;
}

PhoneBook::~PhoneBook(void)
{

}