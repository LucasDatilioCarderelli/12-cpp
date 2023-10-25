/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 08:58:01 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/24 05:05:23 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BITCOINEXCHANGE_HPP
#define	BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

class	BitcoinExchange {
    std::map<std::string, double>	_data;

public:
    BitcoinExchange();
    BitcoinExchange(BitcoinExchange const &other);
    BitcoinExchange const &	operator=(BitcoinExchange const &other);	
    ~BitcoinExchange();

    void    display(std::string file) const;
    void	convertor(std::string date, double value) const;
	bool	isValidDate(std::string date) const;
    std::map<std::string, double>	fromTextToMap(std::string fileName);
    
    class	NegativevalueException: public std::exception {
        public: virtual const char * what() const throw();
    };
    
    class	FileNotFoundException: public std::exception {
        public: virtual const char * what() const throw();
    };
    
    class	BadDateException: public std::exception {
        public: virtual const char * what() const throw();
    };
    
    class	TooLargeNumberException: public std::exception {
        public: virtual const char * what() const throw();
    };
};

#endif
