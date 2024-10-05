#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
	
	public:
				Contact();
		std::string	get_firstName();
		std::string	get_lastName();
		std::string	get_nickName();
		std::string	get_phoneNumber();
		std::string	get_darkestSecret();

		void		set_firstName(std::string str);
		void		set_lastName(std::string str);
		void		set_nickName(std::string str);
		void		set_phoneNumber(std::string str);
		void		set_darkestSecret(std::string str);
};


#endif