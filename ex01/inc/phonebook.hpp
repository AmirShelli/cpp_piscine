#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "contact.hpp"

class PhoneBook{
	private:
		Contact 	MyContacts[9];
		std::string fillInfo(char const *message);
		void displayContact(int index);
	public:
		void add();
		void search();
};

#endif