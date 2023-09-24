/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:09:55 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/24 14:28:24 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public Form {
public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(const std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &other);
    PresidentialPardonForm& operator=(PresidentialPardonForm const &other);
    ~PresidentialPardonForm(void);

    void execute(Bureaucrat const & executor) const;
};

#endif // PRESIDENTIALPARDONFORM_HPP
