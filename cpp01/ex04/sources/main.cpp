/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:04:17 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/21 20:44:51 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Sed.hpp"

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Incorrect arguments!" << std::endl;
        return (1);
    }
    Sed sed;
    sed.replace(argv[1], argv[2], argv[3]);
    return 0;
}
