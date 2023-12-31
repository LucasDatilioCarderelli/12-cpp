/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:44:04 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/18 02:33:53 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : value(0) {}
Data::Data(int input) : value(input) {}
Data::Data(Data const& other) { *this = other; }
Data::~Data() {}

Data& Data::operator=(Data const& other) {
	if (this != &other) {
		this->value = other.value;
	}
	return *this;
}
