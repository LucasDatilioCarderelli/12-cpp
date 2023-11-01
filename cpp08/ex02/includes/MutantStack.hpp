/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:34:19 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/23 03:41:44 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack<T>(void) : std::stack<T>() {}
	~MutantStack<T>(void) {}
	MutantStack<T>(const MutantStack<T> &other) : std::stack<T>() { *this = other; }
	MutantStack<T> &operator=(const MutantStack<T> &other) {
		this->c = other.c;
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin(void) { return this->c.begin(); }
	iterator end(void) { return this->c.end(); }

	const_iterator cbegin(void) const { return this->c.cbegin(); }
	const_iterator cend(void) const { return this->c.cend(); }

	reverse_iterator rbegin(void) { return this->c.rbegin(); }
	reverse_iterator rend(void) { return this->c.rend(); }

	const_reverse_iterator crbegin(void) const { return this->c.crbegin(); }
	const_reverse_iterator crend(void) const { return this->c.crend(); }
};

#endif // MUTANTSTACK_HPP
