/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 23:15:01 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/19 10:35:14 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>

class PhoneBook {
	private:
		Contact 	contacts[8];
		int			size;
		int			index;
		std::string	_getInput(std::string prompt);
		void 		_showContactsList(void);
		void 		_showContact(Contact contact);

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void add(void);
		void search(void);
};

#endif
