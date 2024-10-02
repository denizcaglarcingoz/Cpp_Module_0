#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"



class PhoneBook
{
	private:
		Contact contacts[8];
		int contactCount;

	public:
		PhoneBook();
		~PhoneBook();
		void addContact();
		void searchContact();
		void print(int contactCount);
		void exit();
};

#endif