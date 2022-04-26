/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <bharghaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:35:02 by bharghaz          #+#    #+#             */
/*   Updated: 2022/04/26 17:35:02 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "contact.hpp"

class PhoneBook{
	private:
		Contact 	MyContacts[9];
		std::string fillInfo(char const *message);
		void displayContact(int index);
	public:
		~PhoneBook();
		void add();
		void search();
};

#endif