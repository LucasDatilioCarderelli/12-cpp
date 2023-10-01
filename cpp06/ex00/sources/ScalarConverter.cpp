/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 22:07:24 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/30 21:29:43 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {
}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {
	*this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other) {
	this->c = other.c;
	this->d = other.d;
	this->f = other.f;
	this->i = other.i;
	return (*this);
}

ScalarConverter::~ScalarConverter(void) {
}

void ScalarConverter::convert(const std::string input) {
	char check;
	
	this->input = input;
	
	check = this->checkInputType();
	if (check == 'c') {
		this->castFromChar();
	}
	if (check == 'i') {
		this->castFromInt();
	}
	if (check == 'd') {
		this->castFromDouble();
	}
	if (check == 'f') {
		this->castFromFloat();
	}
	if (check == 0) {
		this->castFromNothing();
		return ;
	}
	this->insertIntoString();
	printResult();
}

char ScalarConverter::checkInputType(void) {
	char *check;

	if (this->input.length() == 1 && std::isalpha(this->input[0])) {
		this->c = this->input[0];
		return 'c';
	}
	strtol(this->input.c_str(), &check, 10);
	if (*check == '\0') { 
		this->i = static_cast<int>(strtol(this->input.c_str(), NULL, 10));
		return 'i';
	}
	strtod(this->input.c_str(), &check);
	if (*check == '\0') {
		this->d = strtod(this->input.c_str(), &check);
		return 'd';
	}
	strtof(this->input.c_str(), &check);
	if (*check == 'f' && *(check + 1) == '\0') {
		this->f = strtof(this->input.c_str(), &check);
		return 'f';
	}
	return 0;
}

void ScalarConverter::castFromChar(void) {
	this->i = static_cast<int>(this->c);
	this->d = static_cast<double>(this->c);
	this->f = static_cast<float>(this->c);
}

void ScalarConverter::castFromInt(void) {
	this->c = static_cast<char>(this->i);
	this->d = static_cast<double>(this->i);
	this->f = static_cast<float>(this->i);
}

void ScalarConverter::castFromFloat(void) {
	this->c = static_cast<char>(this->f);
	this->d = static_cast<double>(this->f);
	this->i = static_cast<int>(this->f);
}

void ScalarConverter::castFromDouble(void) {
	this->c = static_cast<char>(this->d);
	this->i = static_cast<int>(this->d);
	this->f = static_cast<float>(this->d);
}

void ScalarConverter::castFromNothing(void) {
	char *check;

	this->d = strtod(this->input.c_str(), &check);
	this->f = strtof(this->input.c_str(), &check);
	this->c = 0;
	this->i = 0;
	if (*check != '\0') {
		this->d_out = "impossible";
		this->f_out = "impossible";
		this->c_out = "impossible";
		this->i_out = "impossible";
	}
}

void ScalarConverter::insertIntoString(void) {
	std::stringstream ss;

	if (static_cast<double>(this->i) != this->d && this->d_out != "impossible") {
		this->i_out = "impossible";
		this->c_out = "impossible";
		ss << this->d;
		ss >> this->d_out;
		ss.clear();
		ss << this->f << "f";
		ss >> this->f_out;
	}
	else if (this->d_out != "impossible") {
		if (!std::isprint(this->c))
			this->c_out = "Non displayable";
		else {
			ss << "'" << this->c << "'";
			ss >> this->c_out;
			ss.clear();
		}
		ss << this->i;
		ss >> this->i_out;
		ss.clear();
		ss << this->d;
		ss << ".0";
		ss >> this->d_out;
		ss.clear();
		ss << this->f;
		ss << ".0f";
		ss >> this->f_out;
	}
}

void ScalarConverter::printResult(void) {
	std::cout << "char: " << this->c_out << std::endl;
    std::cout << "int: " << this->i_out << std::endl;
    std::cout << "float: " << this->f_out << std::endl;
    std::cout << "double: " << this->d_out << std::endl;
}
