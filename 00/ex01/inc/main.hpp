/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <bharghaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:34:59 by bharghaz          #+#    #+#             */
/*   Updated: 2022/04/26 17:34:59 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <cctype>
# include <cstdio>
# include <string>
# include <iostream>
# include <cstdlib>
# include <sstream>
# include <iomanip>

enum numeration
{
	firstName,
	lastName,
	nickname,
	phoneNumber,
	secret
};

struct info
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string secret;
};

void myGetline(std::string *input);

#endif