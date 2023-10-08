/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:24:44 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/07 22:18:25 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename F>
void iter(T* array, size_t length, F function) {
    for (size_t i = 0; i < length; ++i) {
        function(array[i]);
    }
}

template <typename T>
void printElement(const T& element) {
    std::cout << element << " ";
}

#endif // ITER_HPP
