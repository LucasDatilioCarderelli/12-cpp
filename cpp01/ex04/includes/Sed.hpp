/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:09:11 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/21 20:43:05 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACE_HPP
# define FILEREPLACE_HPP

# include <string>
# include <iostream>
# include <fstream>

class Sed {
    public:
        void replace(const std::string &fileName, 
                     const std::string &s1,
                     const std::string &s2);
};

#endif // FILEREPLACER_HPP