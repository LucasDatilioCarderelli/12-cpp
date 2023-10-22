/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 08:55:55 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/21 22:50:22 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	try {
		_data = fromTextToMap("data.csv");
	}
	catch (BitcoinExchange::FileNotFoundException &e) {
		std::cerr << e.what() << std::endl;
	}
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &other) { *this = other; }
BitcoinExchange::~BitcoinExchange() {}
BitcoinExchange const &	BitcoinExchange::operator=(BitcoinExchange const &other) {
	if (this == &other) {
		return *this;	
	}
	_data = other._data;
	return *this;
}

void	BitcoinExchange::display(std::string file) const {
	if (_data.empty()) {
		return ;
	}
	std::ifstream ifs(file.c_str());
	if (!ifs.is_open()) {
		throw BitcoinExchange::FileNotFoundException();
	}
	std::string	line;
	std::getline(ifs, line);
	while (std::getline(ifs, line)) {
		try {
			if (line.length() < 11) {
				throw BitcoinExchange::BadDateException();
			}
			convertor(line.substr(0, 10), strtod(line.substr(12, line.length()).c_str(), 0));
		}
		catch (BitcoinExchange::BadDateException &e) {
			std::cerr << e.what() << " => " << line.substr(0, 10) << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	ifs.close();
}

void	BitcoinExchange::convertor(std::string date, double value) const {
	std::map<std::string, double>::const_iterator	it;

	if (_data.empty()) {
		return ;
	}
	it = _data.find(date);
	if (it == _data.end()) {
		it = _data.lower_bound(date);
		if (it != _data.begin()) {
			--it;
		}
	}
	if (it == _data.end()) {
		throw BitcoinExchange::BadDateException();
	}
	if (value < 0) {
		throw BitcoinExchange::NegativevalueException();
	}
	if (value > static_cast<double>(INT_MAX)) {
		throw BitcoinExchange::TooLargeNumberException();
	}
	std::cout << date << " => " << value << " = " << value * it->second << std::endl;
}
		
std::map<std::string, double>	BitcoinExchange::fromTextToMap(std::string fileName) {
	std::map<std::string, double>	dataMap;
	std::string						line;

	std::ifstream ifs(fileName.c_str());	
	if (!ifs.is_open()) {
		throw (BitcoinExchange::FileNotFoundException());
	}
	std::getline(ifs, line);
	while (std::getline(ifs, line)) {
		try {
			dataMap[line.substr(0, 10)] = strtod(line.substr(11, line.length()).c_str(), NULL);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	ifs.close();
	return dataMap;
}

const char* BitcoinExchange::NegativevalueException::what() const throw() {
    return "Error: Value is negative";
}

const char* BitcoinExchange::FileNotFoundException::what() const throw() {
    return "Error: Cannot open the file";
}

const char* BitcoinExchange::BadDateException::what() const throw() {
    return "Error: Bad input";
}

const char* BitcoinExchange::TooLargeNumberException::what() const throw() {
    return "Error: Too large number";
}
