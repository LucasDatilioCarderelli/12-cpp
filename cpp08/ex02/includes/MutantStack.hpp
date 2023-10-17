/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:34:19 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/15 16:16:00 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    MutantStack<T>(void) : std::stack<T>() {}
    MutantStack<T>(const MutantStack<T> &other) : std::stack<T>() {*this = other;}
    ~MutantStack<T>(void) {}
    MutantStack<T> &operator=(const MutantStack<T> &other) {
        this->c = other.c;
        return (*this);
    }

    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin(void) { return (this->c.begin()); }
    iterator end(void) { return (this->c.end()); }
};

#endif // MUTANTSTACK_HPP
