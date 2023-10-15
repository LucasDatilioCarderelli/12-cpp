/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 22:08:32 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/15 20:00:24 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <cstdlib>
#include <string>

class ScalarConverter {
private:
    static char c;
    static int i;
    static float f;
    static double d;

    static void castFromChar(void);
    static void castFromInt(void);
    static void castFromFloat(void);
    static void castFromDouble(void);
    static void castFromNothing(void);
    static void convertAndPrint(void);

    ScalarConverter(void);
    ScalarConverter(const ScalarConverter &other);
    ScalarConverter &operator=(const ScalarConverter &other);
    ~ScalarConverter(void);

public:
    static void convert(const std::string input);
};

#endif // CONVERT_HPP
