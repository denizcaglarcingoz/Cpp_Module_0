#include "Contact.hpp"

Contact::Contact()
{

}

std::string	Contact::get_firstName()
{
	return (this->firstName);
}
std::string	Contact::get_lastName()
{
	return (this->lastName);
}
std::string	Contact::get_nickName()
{
	return (this->nickName);
}
std::string	Contact::get_phoneNumber()
{
	return (this->phoneNumber);
}
std::string	Contact::get_darkestSecret()
{
	return (this->darkestSecret);
}
void		Contact::set_firstName(std::string str)
{
	this->firstName = str;
}
void		Contact::set_lastName(std::string str)
{
	this->lastName = str;
}
void		Contact::set_nickName(std::string str)
{
	this->nickName = str;
}
void		Contact::set_phoneNumber(std::string str)
{
	this->phoneNumber = str;
}
void		Contact::set_darkestSecret(std::string str)
{
	this->darkestSecret = str;
}