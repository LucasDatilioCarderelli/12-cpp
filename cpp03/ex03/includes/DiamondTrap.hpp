/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:06:50 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/10 23:52:21 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string _name;

public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &diamondtrap);
    DiamondTrap& operator=(const DiamondTrap &diamondtrap);
    ~DiamondTrap();
    
    void whoAmI();

    using ScavTrap::attack;
};

#endif // DIAMONDTRAP_HPP