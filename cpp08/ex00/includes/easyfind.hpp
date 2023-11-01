/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:54:32 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/23 04:59:07 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>

template <typename T>
typename T::iterator easyfind(T &container, int value) {
    typename T::iterator result = std::find(container.begin(), container.end(), value);
	if (result == container.end()) {
        throw std::runtime_error("Value not found in container");
    }
    return result;
}

#endif // EASYFIND_HPP
