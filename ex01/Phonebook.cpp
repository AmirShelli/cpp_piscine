#include <string.h>
#include <iostream>
#include <cstdlib>


void myGetline(std::string *input)
{
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
		static int	numberOfContacts;
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
					std::cout << "contact's " << message 
						<< "is empty, please fill in the field." << std::endl;
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
			int i;

			for (i = 0; i < 8; i++)
				if(!MyContacts[i].getFirstName().empty())
					displayContact(i);
			{
				if(i > 0)
				{
					std::cout << "please provide a valid index to display: ";
					std::cin >> i;
				} 
				else
					std::cout << "no contacts to show.\n"; 
			} while(i - 1 >= 0 || i - 1 <= 7);
			displayContact(i - 1); 
			// will show anyway??? 
			// error in indexing, set another limit
		}
};

int main()
{
	std::string input;
	PhoneBook sample;

	while(1)
	{
		std::cout << "\nwhat would you like to do?\n"
		<< "\tADD\tSEARCH\tEXIT\n";
		myGetline(&input);
		if(input == "SEARCH" || input == "search")
			sample.search();
		else if((input == "add" || input == "add"))
				sample.add();
		else
			std::cout << "sorry, no such option.\n";

	}
}