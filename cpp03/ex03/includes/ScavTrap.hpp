/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:17:24 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/23 18:46:46 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
protected:
    std::string _name;
    unsigned int _ep;
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &scavtrap);
    ScavTrap& operator=(const ScavTrap &scavtrap);
    ~ScavTrap();

    void attack(const std::string& target);

    void guardGate();
};

#endif
