/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:54:44 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/22 21:36:17 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl {
    public:
        Harl();
        void complain(std::string level);

    private:
        void _debug(void);
        void _info(void);
        void _warning(void);
        void _error(void);
        
        std::string _funcNames[4];
        void (Harl::*_func[4])(void);
};

#endif // HARL_HPP