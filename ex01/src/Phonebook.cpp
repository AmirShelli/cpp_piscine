#include "../inc/phonebook.hpp"

std::string PhoneBook::fillInfo(char const *message)
{	
	int flag;
	std::string input;
	flag = 1;
	while(flag)
	{
		std::cout << "contact's " << message << ": ";
		myGetline(&input);
		if((flag = input.empty()))
			std::cout << "please fill in the contact's " << message 
				<< std::endl;
	}
	return (input);
}

void PhoneBook::displayContact(int index)
		{
			std::cout << index + 1 << " | "
				<< std::setw(10) << MyContacts[index].getFirstName() << " | "
				<< std::setw(10) << MyContacts[index].getLastName() << " | "
				<< std::setw(10) << MyContacts[index].getNickname() << std::endl;
		}

void PhoneBook::add()
		{
			info args;
			int i;

			args.firstName		= fillInfo("first name");
			args.lastName		= fillInfo("last name");
			args.nickname		= fillInfo("nickname");
			args.phoneNumber	= fillInfo("phone number");
			args.secret 		= fillInfo("secret");
			i = 0;
			while(!(MyContacts[i].getFirstName().empty())
				&& i < 9)
				i++;
			MyContacts[i].setContact(args);
		}

void PhoneBook::search()
		{
			int num;
			int i;
			std::string str;
			
			num = 0;
			for (i = 0; i < 8; i++)
				if(!MyContacts[i].getFirstName().empty())
				{	
					displayContact(i);
					num++;
				}
			do {
				if(num)
				{
					std::cout << "please provide a valid index: ";
					std::cin >> str;
					i = stoi(str);
				} 
				else
					std::cout << "no contacts to show.\n";
			} while((i - 1 < 0 || i - 1 >= num) && num);
			if(num)
			{
				MyContacts[i - 1].displayContact();
				std::cin.ignore();
			}
		}