/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:33:37 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/24 17:39:21 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form {
public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &other);
    RobotomyRequestForm& operator=(RobotomyRequestForm const &other);
    ~RobotomyRequestForm(void);

    void execute(Bureaucrat const & executor) const;
};

#endif // ROBOTOMYREQUESTFORM_HPP
