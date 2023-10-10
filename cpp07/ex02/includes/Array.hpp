/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:24:44 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/08 22:57:14 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
    T* data;
    unsigned int length;

public:
    Array();
    explicit Array(unsigned int n);
    Array(const Array<T>& other);
    ~Array();

    Array<T>& operator=(const Array<T>& other);

    T& operator[](unsigned int index);

    unsigned int size() const;
};

#include "Array.tpp"

#endif // ARRAY_HPP
