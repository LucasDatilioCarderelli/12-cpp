/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 22:07:24 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/18 02:58:59 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

char ScalarConverter::c = 0;
int ScalarConverter::i = 0;
float ScalarConverter::f = 0.0f;
double ScalarConverter::d = 0.0;

ScalarConverter::ScalarConverter(void) {}
ScalarConverter::~ScalarConverter(void) {}
ScalarConverter::ScalarConverter(const ScalarConverter &other) {*this = other;}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other) {
	if (this != &other) {}
	return *this;
}


void ScalarConverter::convert(const std::string input) {
	char *checkInt;
	char *checkDouble;
	char *checkFloat;

	int intValue = static_cast<int>(strtol(input.c_str(), &checkInt, 10));
	double doubleValue = strtod(input.c_str(), &checkDouble);
	float floatValue = strtof(input.c_str(), &checkFloat);
	if (input.length() == 1 && std::isalpha(input[0])) {
		ScalarConverter::c = input[0];
		castFromChar();
	}
	else if (*checkInt == '\0') { 
		ScalarConverter::i = intValue;
		castFromInt();
	}
	else if (*checkDouble == '\0') {
		ScalarConverter::d = doubleValue;
		castFromDouble();
	}
	else if (*checkFloat == 'f' && *(checkFloat + 1) == '\0') {
		ScalarConverter::f = floatValue;
		castFromFloat();
	}
	else {
		castFromNothing();
		return ;	
	}
	convertAndPrint();
}

void ScalarConverter::castFromChar(void) {
	ScalarConverter::i = static_cast<int>(ScalarConverter::c);
	ScalarConverter::d = static_cast<double>(ScalarConverter::c);
	ScalarConverter::f = static_cast<float>(ScalarConverter::c);
}

void ScalarConverter::castFromInt(void) {
	ScalarConverter::c = static_cast<char>(ScalarConverter::i);
	ScalarConverter::d = static_cast<double>(ScalarConverter::i);
	ScalarConverter::f = static_cast<float>(ScalarConverter::i);
}

void ScalarConverter::castFromFloat(void) {
	ScalarConverter::c = static_cast<char>(ScalarConverter::f);
	ScalarConverter::d = static_cast<double>(ScalarConverter::f);
	ScalarConverter::i = static_cast<int>(ScalarConverter::f);
}

void ScalarConverter::castFromDouble(void) {
	ScalarConverter::c = static_cast<char>(ScalarConverter::d);
	ScalarConverter::i = static_cast<int>(ScalarConverter::d);
	ScalarConverter::f = static_cast<float>(ScalarConverter::d);
}

void ScalarConverter::castFromNothing(void) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

void ScalarConverter::convertAndPrint() {
    if (static_cast<double>(ScalarConverter::i) != ScalarConverter::d) {
        std::cout << "char: impossible" << std::endl;
		if (ScalarConverter::i == -2147483648) {
			std::cout << "int: impossible" << std::endl;	
		} else {
			std::cout << "int: " << ScalarConverter::i << std::endl;			
		}
        std::cout << "float: " << ScalarConverter::f << "f" << std::endl;
        std::cout << "double: " << ScalarConverter::d << std::endl;
    }
    else {
        std::cout << "char: ";
        if (ScalarConverter::i < 32 || ScalarConverter::i > 126) {
            std::cout << "Non displayable" << std::endl;
		} else {
            std::cout << "'" << ScalarConverter::c << "'" << std::endl;
		}
        std::cout << "int: " << ScalarConverter::i << std::endl;
		std::string zero = (ScalarConverter::d - ScalarConverter::i == 0) ? ".0" : "";
        std::cout << "float: " << ScalarConverter::f << zero << "f" << std::endl;
        std::cout << "double: " << ScalarConverter::d << zero << std::endl;
    }
}
