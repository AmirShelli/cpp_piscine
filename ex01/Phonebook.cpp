#include <string>
#include <iostream>

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
	public:
		void add()
		{
			info args;
			std::cin >> args.firstName;
			std::cin >> args.firstName;
			std::cin >> args.firstName;
			std::cin >> args.firstName;
			std::cin >> args.firstName;
			
		}
};