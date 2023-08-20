/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:25:14 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/20 19:59:03 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie *horde = new Zombie[N];
    
    for (int i = 0; i < N; i++) {
        horde[i].setName(name);
    }
    return horde;
}
