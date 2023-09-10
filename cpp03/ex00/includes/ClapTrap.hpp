/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:46:53 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/09 16:50:36 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
private:
    std::string     _name;
    unsigned int    _hp;
    unsigned int    _ep;
    unsigned int    _ad;

public:
    ClapTrap(void);
    ~ClapTrap(void);
    ClapTrap(const std::string& name);
    ClapTrap(ClapTrap const &claptrap);
    ClapTrap& operator=(ClapTrap const &claptrap);

    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

    void            setAD(unsigned int amount);
    unsigned int    getAD(void);
    std::string     getName(void);
    
};

#endif //CLAPTRAP
