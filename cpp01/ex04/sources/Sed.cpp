/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:08:45 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/21 23:44:29 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Sed.hpp"

void Sed::replace(const std::string& fileName,
                  const std::string& s1,
                  const std::string& s2)
{
    std::ifstream inputFile(fileName.c_str());
    if (!inputFile.is_open()) {
        std::cout << fileName << ": input file not open!" << std::endl;
        return ;
    }

    std::string outputFileName = fileName + ".replace";
    std::ofstream outputFile(outputFileName.c_str());
    if (!outputFile.is_open()) {
        std::cout << outputFileName << ": output file not created" << std::endl;
        return ;
    }
    
    std::string line;
    while (std::getline(inputFile, line)) {
        size_t startPos = 0;
        size_t lastPos = 0;
        while (true) {
            startPos = line.find(s1, lastPos);
            if (startPos == std::string::npos) {
                break;
            }   
            outputFile << line.substr(lastPos, startPos - lastPos) << s2;
            lastPos = startPos + s1.length();
        }
        outputFile << line.substr(lastPos) << '\n';
    }

    inputFile.close();
    outputFile.close();
    std::cout << "Sed: " << outputFileName << " replaced!" << std::endl;
}
