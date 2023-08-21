/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:29:05 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/20 23:31:51 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "../includes/Weapon.hpp"
# include <iostream>

class HumanB {
    private:
        Weapon*     _weapon;
        std::string _name;
    
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack(void);
        void setWeapon(Weapon& weapon);
};

#endif // HUMANB_HPP