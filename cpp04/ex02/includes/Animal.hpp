/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 23:13:37 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/17 17:52:06 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class AAnimal {
protected:
    std::string type;
 
public:
    AAnimal();
    AAnimal(const std::string type);
    AAnimal(const AAnimal &other);
    AAnimal& operator=(const AAnimal &other);
    virtual ~AAnimal();

    virtual void makeSound() const = 0;
    std::string getType() const;
};

#endif // ANIMAL_HPP
