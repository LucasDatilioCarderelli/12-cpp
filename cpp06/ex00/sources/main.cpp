/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 22:14:33 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/15 19:56:51 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Incorrect number of parameters" << std::endl;
		return 1;
	}
	std::string input = argv[1];
	ScalarConverter::convert(input);
	return 0;
}
