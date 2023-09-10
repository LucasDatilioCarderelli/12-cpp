/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:41:13 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/10 17:55:14 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int main (void) {
    ClapTrap claptrap("CL4-TP");
    ClapTrap r2d2("R2D2");
    ClapTrap c3po("C3PO");
    ClapTrap cl4pTp(claptrap);

    r2d2.setAD(2);
    c3po.setAD(3);
    for (int i = 0; i < 6; i++) {
        r2d2.attack(c3po.getName());
        c3po.takeDamage(r2d2.getAD());
    }
    cl4pTp.beRepaired(4);      
    for (int i = 0; i < 6; i++) {
        r2d2.beRepaired(1);        
    }

    return 0;
}
