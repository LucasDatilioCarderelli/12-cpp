/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:54:32 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/10 22:55:26 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T& container, int value) {
    typename T::iterator it = container.begin();
    while (it != container.end()) {
        if (*it == value) {
            return it; 
        }
        ++it;
    }
    throw std::runtime_error("Valor não encontrado no contêiner");
}
