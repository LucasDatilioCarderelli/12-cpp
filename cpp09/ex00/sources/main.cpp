/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:04:02 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/21 22:32:23 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp" 

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Error: btc must take 2 arguments" << std::endl;
		return 1;
	}
	try {
		BitcoinExchange	btc;
		btc.display(argv[1]);		
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
		return 2;
	}
    return 0;
}
