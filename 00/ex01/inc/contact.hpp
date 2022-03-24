#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "main.hpp"

class Contact{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string secret;
	public:
		Contact();
		~Contact();
		void displayContact();
		void setContact(info args);
		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getSecret();
};

#endif