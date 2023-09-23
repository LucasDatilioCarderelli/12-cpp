/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:46:53 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/23 18:18:16 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
protected:
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

    void            setName(std::string name);
    void            setHP(unsigned int amount);
    void            setEP(unsigned int amount);
    void            setAD(unsigned int amount);
    std::string     getName(void);
    unsigned int    getHP(void);
    unsigned int    getEP(void);
    unsigned int    getAD(void);
    
};

#endif //CLAPTRAP
