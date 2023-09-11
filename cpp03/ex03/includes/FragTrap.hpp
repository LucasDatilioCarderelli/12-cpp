/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:17:24 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/10 23:51:10 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
protected:
    std::string _name;
    unsigned int _ep;
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &fragtrap);
    FragTrap& operator=(const FragTrap &fragtrap);
    ~FragTrap();

    void highFivesGuys(void);
};

#endif
