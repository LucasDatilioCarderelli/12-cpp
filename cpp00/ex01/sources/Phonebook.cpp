/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 23:21:22 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/19 16:30:47 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->index = 0;
	this->size = 0;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "_bye!" << std::endl;
}

std::string	PhoneBook::_getInput(std::string prompt) {
	std::string value;
	
	std::cout << prompt;
	std::getline(std::cin, value);
	while (value == "") {
		std::cout << "Invalid input" << std::endl << prompt;
		std::getline(std::cin, value);
	}
	return value;
}

void	PhoneBook::add(void) {
	std::cin.ignore();
	
	std::string	first_name = _getInput("Enter first name: ");
	std::string	last_name = _getInput("Enter last name: ");
	std::string	nick_name = _getInput("Enter nickname: ");
	std::string	phone_number = _getInput("Enter phonenumber: ");
	std::string	darkest_secret = _getInput("Enter darkest secret: ");
	
	this->contacts[this->index].setFirstName(first_name);
	this->contacts[this->index].setLastName(last_name);
	this->contacts[this->index].setNickName(nick_name);
	this->contacts[this->index].setPhoneNumber(phone_number);
	this->contacts[this->index].setDarkestSecret(darkest_secret);
	
	this->index++;
	if (this->size < 8) {
		this->size++;
	}
	if (this->index == 8) {
		index = 0;
	}
}

void	PhoneBook::_showContactsList(void) {
	std::cout << std::setw(10) << "Index" << " | ";
	std::cout << std::setw(10) << "First Name" << " | ";
	std::cout << std::setw(10) << "Last Name" << " | ";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	
	for (int i = 0; i < size; ++i) {
		Contact	temp = this->contacts[i];

		if (temp.getFirstName().length() > 10) {
			temp.setFirstName(temp.getFirstName().substr(0, 9) + '.');
		}
		if (temp.getLastName().length() > 10) {
			temp.setLastName(temp.getLastName().substr(0, 9) + '.');
		}
		if (temp.getNickName().length() > 10) {
			temp.setNickName(temp.getNickName().substr(0, 9) + '.');
		}
		std::cout << std::setw(10) << i << " | ";
		std::cout << std::setw(10) << temp.getFirstName() << " | ";
		std::cout << std::setw(10) << temp.getLastName() << " | " ;
		std::cout << std::setw(10) << temp.getNickName() << std::endl;
	}
}

void	PhoneBook::_showContact(Contact contact) {
	std::cout << "First name : " << contact.getFirstName() << std::endl;
	std::cout << "Last name : " << contact.getLastName() << std::endl;
	std::cout << "Nickname : " << contact.getNickName() << std::endl;
	std::cout << "Phone number : " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret : " << contact.getDarkestSecret() << std::endl;
}

void	PhoneBook::search(void) {
	std::stringstream	stream;
	std::string			input;
	int					index;

	if (this->size <= 0) {
		std::cout << "_oh no, my list is empyt :(" << std::endl;
	}
	else {
		_showContactsList();
		std::cout << "\nEnter a index: ";
		std::cin >> input;
		std::stringstream ss(input);
		ss >> index;
		if (!ss.fail() && index < this->size && index >= 0) {
			_showContact(this->contacts[index]);
		}
		else {
			std::cout << "_sorry, i can only save 8 contacts :(" << std::endl;
		}
	}
}
