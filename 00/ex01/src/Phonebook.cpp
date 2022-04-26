/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <bharghaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:35:11 by bharghaz          #+#    #+#             */
/*   Updated: 2022/04/26 22:11:56 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"
#include <cctype>
#include <math.h>
#include <cstdio>

int todigit(std::string str)
{
	int res;

	res = 0;
	for(int i = str.size() - 1; i >= 0 ; i--)
	{	
		if(!isdigit(str[i]))
			return (-1);
		res += (str[i] - 48) * pow(10, i);
	}
	return(res);
}

void helpDisplay(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
	std::cout << "|";
}

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
	std::cout << std::setw(10) << index + 1 << " | ";
	helpDisplay( MyContacts[index].getFirstName());
	helpDisplay( MyContacts[index].getLastName());
	helpDisplay( MyContacts[index].getNickname());
	std::cout << std::endl;
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
		&& i < 7)
		i++;
	MyContacts[i].setContact(args);
}

PhoneBook::~PhoneBook() {}

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
			i = todigit(str);
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