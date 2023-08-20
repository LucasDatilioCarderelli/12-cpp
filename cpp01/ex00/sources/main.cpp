/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:37:57 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/20 18:32:20 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(void) {
    Zombie z1[3], z2("hunter");
    Zombie* z3 = newZombie("boomer");
    
    for (size_t i = 0; i < sizeof(z1) / sizeof(z1[0]); i++) {
        z1[i].announce();
    }
    z2.announce();
    z3->announce();
    randomChump("witch");
    delete z3;
    return 0;
}
