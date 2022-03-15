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
		void fillInfo(char const *message)
		{	
			int flag;
			std::string input;
			flag = 1;
			
			while(flag)
			{
				std::cout << "contact's " << message << ": ";
				getline(std::cin, input);
				if(flag = input.empty())
					std::cout << "contact's " << message 
						<< "is empty, please fill in the field." << std::endl;
			}
		}
	public:
		void add()
		{
			info args;
			int i;

			args.firstName		= ("first name");
			args.lastName		= ("last name");
			args.nickname		= ("nickname");
			args.phoneNumber	= ("phone number");
			args.secret 		= ("secret");
			i = 0;
			while(!(MyContacts[i].getFirstName().empty())
				&& i < 9)
				i++;
			MyContacts[i].setContact(args);
		}
};