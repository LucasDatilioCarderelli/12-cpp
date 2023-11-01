/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:34:48 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/23 04:55:49 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
    std::cout << std::endl << "Test: MutantStack" << std::endl;
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);

        std::cout << mstack.top() << std::endl;

        mstack.pop();

        std::cout << mstack.size() << std::endl;

        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        ++it;
        --it;

        while (it != ite)
        {
            std::cout << *it << ", ";
            ++it;
        }

        std::stack<int> s(mstack);
    }

    std::cout << std::endl << "Test: list" << std::endl;
    {
        std::list<int> myList;
        myList.push_back(5);
        myList.push_back(17);

        std::cout << myList.back() << std::endl;

        myList.pop_back();

        std::cout << myList.size() << std::endl;

        myList.push_back(3);
        myList.push_back(5);
        myList.push_back(737);
        myList.push_back(0);

        std::list<int>::iterator it = myList.begin();
        std::list<int>::iterator ite = myList.end();

        ++it;
        --it;

        while (it != ite) {
            std::cout << *it << ", ";
            ++it;
        }

		std::cout << std::endl;
    }

    return 0;
}
