/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:10:04 by msolinsk          #+#    #+#             */
/*   Updated: 2024/10/24 14:24:21 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	_contactCount = 0;
	std::cout << "Welcome to the PhoneBook!" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Goodbye!" << std::endl;
}

PhoneBook::searchContact(void)
{
	std::cout << "Searching for a contact..." << std::endl;
}
