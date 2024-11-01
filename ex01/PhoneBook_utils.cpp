/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:39:21 by msolinsk          #+#    #+#             */
/*   Updated: 2024/10/28 00:17:41 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>

void	PhoneBook::printContact(int idx)
{
	Contact	ct = this->_contacts[idx];

	std::cout << std::right << std::setw(10) << ct.id << " | ";

	if (ct.firstName.length() > 10)
		std::cout << std::right << ct.firstName.substr(0, 9) + "." << " | ";
	else
		std::cout << std::right << std::setw(10) << ct.firstName << " | ";

	if (ct.lastName.length() > 10)
		std::cout << std::right << ct.lastName.substr(0, 9) + "." << " | ";
	else
		std::cout << std::right << std::setw(10) << ct.lastName << " | ";

	if (ct.nickname.length() > 10)
		std::cout << std::right << ct.nickname.substr(0, 9) + "." << std::endl;
	else
		std::cout << std::right << std::setw(10) << ct.nickname << std::endl;
}

void	PhoneBook::moveContacts(void)
{
	int		i;

	i = 1;
	while (i < 8)
	{
		this->_contacts[i - 1] = this->_contacts[i];
		this->_contacts[i - 1].id--;
		i++;
	}
}

void	PhoneBook::get_input(std::string question, std::string *input)
{
	*input = "";
	while (*input == "" && !std::cin.eof())
	{
		std::cout << question;
		if (std::getline(std::cin, *input) && *input != "")
			break ;
		else
			std::cout << RED << "Value can not be empty" << END << std::endl;
	}
}

// void	PhoneBook::get_input(std::string question, int *input)
// {
// 	std::string	tmp;

// 	while (1)
// 	{
// 		std::cout << question;
// 		std::getline(std::cin, tmp);
// 		if (tmp == "")
// 		{
// 			std::cout << RED << "Value can not be empty" << END << std::endl;
// 			*input = -1;
// 		}
// 		else if (std::cin.eof())
// 			break ;
// 		else
// 		{
// 			*input = std::atoi(tmp.c_str());
// 			break ;
// 		}
// 	}
// }
