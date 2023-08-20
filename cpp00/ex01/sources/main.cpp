/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 22:59:22 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/19 16:31:05 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	std::string	input;
	PhoneBook	phonebook;

    std::ios_base::sync_with_stdio(false);
    std::wcin.imbue(std::locale("en_US.utf8"));
    std::wcout.imbue(std::locale("en_US.utf8"));
    std::cout << "\n _my 80's awesome Phonebook" << std::endl;
    while (1) {
        std::cout << "\n INSERT [ADD] [SEARCH] [EXIT]: ";
        std::cin >> input;
        std::cout << std::endl;

        if (input == "ADD") {
            phonebook.add();
        }
        else if (input == "SEARCH") {
            phonebook.search();
        }
        else if (input == "EXIT") {
            break;
        }
        else {
            std::cout << "err..." << std::endl;
        }
    }
    return (0);
}
