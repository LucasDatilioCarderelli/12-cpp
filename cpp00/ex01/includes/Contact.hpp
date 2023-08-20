/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:39:38 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/19 10:55:07 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact {
    private:
        std::string    phoneNumber;
        std::string    firstName;
        std::string    lastName;
        std::string    nickName;
        std::string    darkestSecret;

    public:
        void setPhoneNumber(std::string phoneNumber_);
        void setFirstName(std::string firstName_);
        void setLastName(std::string lastName_);
        void setNickName(std::string nickName_);
        void setDarkestSecret(std::string darkestSecret_);

        std::string getPhoneNumber(void);
        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickName(void);
        std::string getDarkestSecret(void);
};

#endif
