#include <cctype>
#include <cstdio>
#include <string.h>
#include <iostream>
#include <cstdlib>
#include <sstream>


void myGetline(std::string *input)
{
	std::cin.sync();
	getline(std::cin, *input);
	if(*input == "EXIT" || *input == "exit")
		exit(1);
}

struct info
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string secret;
};

class Contact{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string secret;
	public:
		Contact()
		{
			firstName = "";
			lastName = "";
			nickname = "";
			phoneNumber = "";
			secret = "";
		}
		void displayContact()
		{
			std::cout
				<< firstName << std::endl
				<< lastName << std::endl
				<< nickname << std::endl
				<< phoneNumber << std::endl
				<< secret << std::endl;
		}
		void setContact(info args)
		{
			this->firstName = args.firstName;
			this->lastName = args.lastName;
			this->nickname = args.nickname;
			this->phoneNumber = args.phoneNumber;
			this->secret = args.secret;
		}
		std::string getFirstName() { return(firstName); }
		std::string getLastName() { return(lastName); }
		std::string getNickname() { return(nickname); }
		std::string getPhoneNumber() { return(phoneNumber); }
		std::string getSecret() { return(secret); }
};

class PhoneBook{
	private:
		Contact 	MyContacts[9];
		std::string fillInfo(char const *message)
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
		void displayContact(int index)
		{
			std::cout << index + 1 << " | "
				<< MyContacts[index].getFirstName() << " | "
				<< MyContacts[index].getLastName() << " | "
				<< MyContacts[index].getNickname() << std::endl;
		}
	public:
		void add()
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
		void search()
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
};

int main()
{
	std::string input;
	PhoneBook sample;

	while(1)
	{
		std::cout << "\nchoose a command:\n"
		<< "\tADD\tSEARCH\tEXIT\n";
		myGetline(&input);
		if(input == "SEARCH" || input == "search")
			sample.search();
		else 
		{
			if((input == "add" || input == "add"))
				sample.add();
			else
				std::cout << "sorry, no such option.\n";
		}
		
	}
}