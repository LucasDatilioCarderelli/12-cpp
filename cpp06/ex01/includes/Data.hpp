/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:43:55 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/01 23:07:57 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

struct Data {
    int value;

    Data();
    Data(int input);
    Data(Data const& other);
    Data& operator=(Data const& other);
    ~Data();
};

#endif  // DATA_HPP
