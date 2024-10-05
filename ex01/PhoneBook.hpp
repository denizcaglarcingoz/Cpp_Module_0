#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <limits>
#include <cstdlib>
#include "Contact.hpp"


void		printTill(std::string str);
bool		isDigit(std::string PhoneNumber);
void		eofExit();
std::string	inputLoop(std::string toPrint);
int			stringToInt(const std::string& str);
void		searchEntranceText();

class PhoneBook
{
	private:
		Contact contacts[8];
		int contactCount;
		int contactFull;

	public:
		PhoneBook();
		void addContact();
		void searchContact();
		void print(int contactCount);
		void printSpecific(int index);
		void Exit();
};

#endif