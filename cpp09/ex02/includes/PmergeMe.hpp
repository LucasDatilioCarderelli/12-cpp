/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:27:21 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/28 16:37:45 by ldatilio         ###   ########.fr       */
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
    PmergeMe(PmergeMe const &src);
    ~PmergeMe(void);
    PmergeMe &operator=(PmergeMe const &rhs);

public:
    static void mergeInsertSort(std::vector<int>& vec);
    static void mergeInsertSort(std::deque<int>& deque);
};

#endif
