/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:27:21 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/29 02:11:46 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <ctime>
#include <algorithm>
#include <vector>
#include <deque>

class PmergeMe {
    PmergeMe(void);
    PmergeMe(PmergeMe const &other);
    ~PmergeMe(void);
    PmergeMe &operator=(PmergeMe const &other);

public:
    static void mergeInsertSort(std::vector<int>& vec);
    static void mergeInsertSort(std::deque<int>& deque);
};

#endif
