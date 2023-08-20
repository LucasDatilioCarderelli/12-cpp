/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:36:12 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/18 23:20:45 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

void    Contact::setPhoneNumber(std::string phoneNumber_) {
    this->phoneNumber = phoneNumber_;
}

void    Contact::setFirstName(std::string firstName_) {
    this->firstName = firstName_;
}

void    Contact::setLastName(std::string lastName_) {
    this->lastName = lastName_;
}

void    Contact::setNickName(std::string nickName_) {
    this->nickName = nickName_;
}

void    Contact::setDarkestSecret(std::string darkestSecret_) {
    this->darkestSecret = darkestSecret_;
}

std::string Contact::getPhoneNumber(void) {
    return (this->phoneNumber);
}

std::string Contact::getFirstName(void) {
    return (this->firstName);
}

std::string Contact::getLastName(void) {
    return (this->lastName);
}

std::string Contact::getNickName(void) {
    return (this->nickName);
}

std::string Contact::getDarkestSecret(void) {
    return (this->darkestSecret);
}
