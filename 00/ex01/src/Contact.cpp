/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <bharghaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:35:05 by bharghaz          #+#    #+#             */
/*   Updated: 2022/04/26 17:35:05 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/contact.hpp"

Contact::Contact()
{
	firstName = "";
	lastName = "";
	nickname = "";
	phoneNumber = "";
	secret = "";
}

Contact::~Contact(){}

void Contact::displayContact()
{
	std::cout
		<< firstName << std::endl
		<< lastName << std::endl
		<< nickname << std::endl
		<< phoneNumber << std::endl
		<< secret << std::endl;
}

void  Contact::setContact(info args)
{
	this->firstName = args.firstName;
	this->lastName = args.lastName;
	this->nickname = args.nickname;
	this->phoneNumber = args.phoneNumber;
	this->secret = args.secret;
}

std::string Contact::getFirstName() { return(firstName); }
std::string Contact::getLastName() { return(lastName); }
std::string Contact::getNickname() { return(nickname); }
std::string Contact::getPhoneNumber() { return(phoneNumber); }
std::string Contact::getSecret() { return(secret); }

