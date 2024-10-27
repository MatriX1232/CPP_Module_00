/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:57:06 by msolinsk          #+#    #+#             */
/*   Updated: 2024/10/24 18:54:09 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	std::string	command;
	PhoneBook	phonebook;

	while (1)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, command);

		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT")
			break ;
		else if (command.empty() || std::cin.eof())
		{
			std::cout << std::endl;
			break ;
		}
		else
			std::cout << RED << "Invalid command <" << command << ">. Please try again." << END << std::endl;
	}

	return (0);
}
