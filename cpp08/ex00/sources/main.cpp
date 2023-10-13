/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:48:52 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/12 22:42:18 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    int arr[] = {1, 2, 1, 1, 3};
    std::vector<int> v_numbers(arr, arr + sizeof(arr) / sizeof(arr[0]));
    std::deque<int> d_numbers(arr, arr + sizeof(arr) / sizeof(arr[0]));
    std::list<int> l_numbers(arr, arr + sizeof(arr) / sizeof(arr[0]));
    std::set<int> s_numbers(arr, arr + sizeof(arr) / sizeof(arr[0]));

    try {
        std::vector<int>::iterator result1 = easyfind(v_numbers, 1);
        std::cout << "Valor " << *result1 << " encontrado na posição "
                  << std::distance(v_numbers.begin(), result1) << std::endl;
        
        std::deque<int>::iterator result2 = easyfind(d_numbers, 2);
        std::cout << "Valor " << *result2 << " encontrado na posição "
                  << std::distance(d_numbers.begin(), result2) << std::endl;

        std::list<int>::iterator result3 = easyfind(l_numbers, 3);
        std::cout << "Valor " << *result3 << " encontrado na posição "
                  << std::distance(l_numbers.begin(), result3) << std::endl;

        std::set<int>::iterator result4 = easyfind(s_numbers, 3);
        std::cout << "Valor " << *result4 << " encontrado na posição "
                  << std::distance(s_numbers.begin(), result4) << std::endl;
                  
        std::set<int>::iterator result5 = easyfind(s_numbers, 5);
        std::cout << "Valor " << *result5 << " encontrado na posição "
                  << std::distance(s_numbers.begin(), result5) << std::endl;

    } catch (const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
