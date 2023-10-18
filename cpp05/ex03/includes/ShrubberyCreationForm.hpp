/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:06:11 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/24 17:07:22 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFOM_HPP
#define SHRUBBERYCREATIONFOM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(const std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const &other);
    ShrubberyCreationForm& operator=(ShrubberyCreationForm const &other);
    ~ShrubberyCreationForm(void);

    void execute(Bureaucrat const & executor) const;
};

#define SHRUBBERY "\n                   \n\
                      .o00o             \n\
                   o000000oo            \n\
                  00000000000o          \n\
                 00000000000000         \n\
              oooooo  00000000  o88o    \n\
           ooOOOOOOOoo  ```''  888888   \n\
         OOOOOOOOOOOO'.qQQQQq. `8888'   \n\
        oOOOOOOOOOO'.QQQQQQQQQQ/.88'    \n\
        OOOOOOOOOO'.QQQQQQQQQQ/ /q      \n\
         OOOOOOOOO QQQQQQQQQQ/ /QQ      \n\
           OOOOOOOOO `QQQQQQ/ /QQ'      \n\
             OO:F_P:O `QQQ/  /Q'        \n\
                \\. \\ |  // |          \n\
                d\\ \\\\|_////          \n\
                qP| \\ _' `|Ob          \n\
                   \\  / \\  \\Op       \n\
                   |  | O| |            \n\
           _       /\\. \\_/ /\\        \n\
            `---__/|_\\    /|  __       \n\
                  `-'  `-'`-'-'         \n"

#endif // SHRUBBERYCREATIONFOM_HPP
