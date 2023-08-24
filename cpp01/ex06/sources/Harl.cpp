/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:53:27 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/23 21:50:24 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl() {
    _funcNames[0] = "DEBUG";
    _funcNames[1] = "INFO";
    _funcNames[2] = "WARNING";
    _funcNames[3] = "ERROR";

    _func[0] = &Harl::_debug;
    _func[1] = &Harl::_info;
    _func[2] = &Harl::_warning;
    _func[3] = &Harl::_error;
}

void Harl::complain(std::string level) {
    int i;

    for (i = 0; i < 4; i++) {
        if (this->_funcNames[i].compare(level) == 0) {
            break ;
        }
    }

	switch (i)
    {
    case 0 :
        (this->*_func[0])();
        __attribute__((fallthrough));
    case 1 :
        (this->*_func[1])();
        __attribute__((fallthrough));
    case 2 :
        (this->*_func[2])();
        __attribute__((fallthrough));
    case 3 :
        (this->*_func[3])();
        break ;
    case 4 :
        std::cout <<
    "[ Probably complaining about insignificant problems ]"
    << std::endl;
        break ;
	}
}

void Harl::_debug(void) {
    std::cout << "[ DEBUG ]" << std::endl
    << "I love having extra bacon for my "
    << "7XL-double-cheese-triple-pickle-specialketchup burger. "
    << "I really do!"
    << std::endl << std::endl;
}

void Harl::_info(void) {
    std::cout << "[ INFO ]" << std::endl
    << "I cannot believe adding extra bacon costs more money. "
    << "You didn’t put enough bacon in my burger! "
    << "If you did, I wouldn’t be asking for more! "
    << std::endl << std::endl;
}

void Harl::_warning(void) {
    std::cout << "[ WARNING ]" << std::endl
    << "I think I deserve to have some extra bacon for free. "
    << "I’ve been coming for years whereas you started "
    << "working here since last month. "
    << std::endl << std::endl;
}

void Harl::_error(void) {
    std::cout << "[ ERROR ]" << std::endl
    << "This is unacceptable! "
    << "I want to speak to the manager now. "
    << std::endl << std::endl;
}
