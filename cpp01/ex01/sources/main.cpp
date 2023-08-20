/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:25:10 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/20 19:55:01 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(void) {
    int hordeLenght = 3;
    Zombie *horde = zombieHorde(hordeLenght, "horde");

    for (int i = 0; i < hordeLenght; i++) {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}
