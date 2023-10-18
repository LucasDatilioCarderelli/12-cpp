/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:43:11 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/19 23:07:14 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat {
    const std::string   _name;
    int                 _grade;

public:
    Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(Bureaucrat const &other);
    ~Bureaucrat();

    Bureaucrat& operator=(Bureaucrat const &other);
    Bureaucrat& operator++(void);
    Bureaucrat  operator++(int);
    Bureaucrat& operator--(void);
    Bureaucrat  operator--(int);
    
    const std::string   getName() const;
    int                 getGrade() const;

    class GradeTooHighException : public std::exception {
        public:
            const char* what(void) const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            const char* what(void) const throw();
    };
};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &b);

#endif // BUREAUCRAT_HPP
