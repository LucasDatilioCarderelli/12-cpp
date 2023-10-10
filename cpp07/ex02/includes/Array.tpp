/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:36:24 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/08 21:02:34 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : data(NULL), length(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : length(n) {
    data = new T[n];
}

template <typename T>
Array<T>::Array(const Array<T>& other) : length(other.length) {
    data = new T[other.length];
    for (unsigned int i = 0; i < other.length; ++i) {
        data[i] = other.data[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
    if (this != &other) {
        delete[] data;
        length = other.length;
        data = new T[other.length];
        for (unsigned int i = 0; i < other.length; ++i) {
            data[i] = other.data[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] data;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= length) {
        throw std::out_of_range("Index out of bounds");
    }
    return data[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return length;
}
