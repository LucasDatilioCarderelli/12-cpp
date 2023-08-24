/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:52:45 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/23 21:49:11 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(int argc, char **argv) {
    Harl harl;

    if (argc != 2)
        return 1;

    harl.complain(argv[1]);

    return 0;
}
