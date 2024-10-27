/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:10:04 by msolinsk          #+#    #+#             */
/*   Updated: 2024/10/28 00:14:51 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <sstream>

PhoneBook::PhoneBook()
{
	_contactCount = 0;
	std::cout << CYAN << "Welcome to the PhoneBook!" << END << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << YELLOW << "Goodbye!" << std::endl;
}

void	PhoneBook::searchContact(void)
{
	int					i;
	int					c_id;
	std::string			contact_id;
	std::stringstream	ss;

	get_input("Enter contact index: ", &contact_id);

	ss.clear();
	ss.str(contact_id);
	ss >> c_id;

	if (c_id < 0 || c_id > this->_contactCount - 1)
	{
		std::cout << RED << "Invalid contact index!" << END << std::endl;
		return ;
	}
	i = 0;
	while (i < this->_contactCount)
	{
		if (_contacts[i].id == c_id)
		{
			printContact(i);
			return ;
		}
		i++;
	}
	std::cout << RED << "Contact not found!" << END << std::endl;
}

void	PhoneBook::addContact(void)
{
	int		new_id;

	if (this->_contactCount + 1 > 8)
	{
		moveContacts();
		new_id = 7;
	}
	else
	{
		new_id = this->_contactCount;
		this->_contactCount++;
	}

	get_input("Enter first name: ", &(this->_contacts[new_id].firstName));
	get_input("Enter last name: ", &(this->_contacts[new_id].lastName));
	get_input("Enter nickname: ", &(this->_contacts[new_id].nickname));
	get_input("Enter phone number: ", &(this->_contacts[new_id].phoneNumber));
	get_input("Enter darkest secret: ", &(this->_contacts[new_id].darkestSecret));
	this->_contacts[new_id].id = new_id;
	std::cout << GREEN << "Contact added!" << END << std::endl;
}

void	PhoneBook::printAllContacts(void)
{
	int	i;

	i = 0;
	while (i < this->_contactCount)
	{
		printContact(i);
		i++;
	}
}
