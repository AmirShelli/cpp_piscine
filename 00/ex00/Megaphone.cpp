/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <bharghaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:34:45 by bharghaz          #+#    #+#             */
/*   Updated: 2022/04/26 17:34:45 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include <cctype>

class ToUpper {
	public:
		ToUpper(int argc, char **input)
		{
			if(argc > 1)
				for (int j = 1; j < argc; j++)
				{	
					for(unsigned long i = 0; i < strlen(input[j]); i++)
						std::cout << (char)toupper(input[j][i]);
					std::cout << ' ';
				}
			else
				std::cout << "* LOUD AND UNREADABLE FEEDBACK NOISE *";
			std::cout << std::endl;
		};
};

int main(int argc, char **argv)
{
	ToUpper Execution(argc, argv);
	return (1);
}