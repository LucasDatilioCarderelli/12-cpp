/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:43:28 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/24 19:44:55 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	public:
	  	Intern(void);
		Intern(const Intern &i);
		Intern &operator=(const Intern &other);
		~Intern(void);

		Form* createShrubberyForm(const std::string target) const;
		Form* createRobotomyForm(const std::string target) const;
		Form* createPresidentialForm(const std::string target) const;
		Form* makeForm(const std::string name, const std::string target);

		class InvalidFormException : public std::exception {
			public:
				const char* what(void) const throw();
  		};
};

#endif // INTERN_HPP
