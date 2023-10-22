/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:44:09 by ldatilio          #+#    #+#             */
/*   Updated: 2023/10/18 04:24:04 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main(void) {
  Data data = Data(42);

  uintptr_t raw = Serializer::serialize(&data);
  Data *ptr = Serializer::deserialize(raw);

  std::cout << "Raw pointer: " << &data << std::endl;
  std::cout << "Ptr pointer: " << ptr << std::endl;

  std::cout << "Raw value:   " << raw << std::endl;

  std::cout << "Data value:  " << data.value << std::endl;
  std::cout << "Ptr value:   " << ptr->value << std::endl;

  return (0);
}
