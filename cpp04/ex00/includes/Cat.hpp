/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 23:13:37 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/13 23:33:39 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <string>

class Cat : public Animal {
 
public:
    Cat();
    Cat(const Cat &other);
    Cat& operator=(const Cat &other);
    ~Cat();

    void makeSound() const;
};

#endif // CAT_HPP
