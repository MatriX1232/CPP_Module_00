/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:57:31 by msolinsk          #+#    #+#             */
/*   Updated: 2024/10/25 10:56:12 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define END "\x1b[0m"
# define BOLD "\x1b[1m"
# define UNDER "\x1b[4m"
# define REV "\x1b[7m"
# define GREY "\x1b[30m"
# define RED "\x1b[31m"
# define GREEN "\x1b[32m"
# define YELLOW "\x1b[33m"
# define BLUE "\x1b[34m"
# define PURPLE "\x1b[35m"
# define CYAN "\x1b[36m"
# define WHITE "\x1b[37m"

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact		_contacts[8];
		int			_contactCount;
		void		printContact(int idx);
		void		moveContacts();
		void		printAllContacts();
		void		get_input(std::string question, std::string *input);

	public:
		PhoneBook();
		~PhoneBook();
		void		addContact();
		void		searchContact();
};

#endif
