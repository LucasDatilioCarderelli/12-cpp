/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 22:08:32 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/30 21:28:07 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

class ScalarConverter {
    std::string input;
    char c;
    int i;
    float f;
    double d;
    std::string c_out;
    std::string i_out;
    std::string d_out;
    std::string f_out;

public:
    ScalarConverter(void);
    ScalarConverter(const ScalarConverter &other);
    ScalarConverter &operator=(const ScalarConverter &other);
    ~ScalarConverter(void);

    void convert(const std::string input);

    char checkInputType(void);
    void castFromChar(void);
    void castFromInt(void);
    void castFromFloat(void);
    void castFromDouble(void);
    void castFromNothing(void);
    void insertIntoString(void);
    void printResult(void);
};

#endif // CONVERT_HPP
