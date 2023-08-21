/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:29:07 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/20 23:55:50 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "../includes/Weapon.hpp"
# include <iostream>

class HumanA {
    private:
        Weapon      &_weapon;
        std::string _name;
    
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void attack(void);
};

#endif // HUMANA_HPP