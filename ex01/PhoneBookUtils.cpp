#include "PhoneBook.hpp"


void printTill(std::string str)
{
	int strSize;

	strSize = str.size();
	if (strSize < 10)
	{	
		for (int i = 0; i < (10 - strSize) / 2; i++)
			std::cout << " ";
		std::cout << str;
		for (int i = 0; i < (10 - strSize) - ((10 - strSize) / 2); i++)
			std::cout<< " ";
	}
	else if (strSize == 10)
		std::cout << str;
	else
	{
		for (int i = 0; i < 9; i++)
		{
			std::cout << str[i];
		}
		std::cout << ".";
	}
	std::cout << "|";
}

bool	isDigit(std::string PhoneNumber)
{
	for (long unsigned int i = 0; i < PhoneNumber.size(); i++)
	{
		if (!(isdigit(PhoneNumber[i])))
		{
			return (false);
		}
	}	
	return (true);
}

void	eofExit()
{
	std::cout << std::endl << "EOF" << std::endl;
	exit(0);
}

std::string inputLoop(std::string toPrint)
{
	std::string input;

	input = "";
	while (input == "")
	{
		std::cout << toPrint;
		if (!(std::getline(std::cin, input)))
			eofExit();
	}
	return (input);
}

int	stringToInt(const std::string& str)
{
	std::stringstream ss(str);
	int	num;

	ss >> num;
	return (num);
}

void	searchEntranceText()
{
	std::cout << "|--INDEX---|FIRSTNAME-|-LASTNAME-|-NICKNAME-|" << std::endl;
	std::cout << "|**********|**********|**********|**********|" << std::endl;
	std::cout << "|**********|**********|**********|**********|" << std::endl;
	
}
