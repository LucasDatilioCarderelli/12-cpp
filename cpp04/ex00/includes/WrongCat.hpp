/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 23:13:37 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/13 23:33:19 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <string>

class WrongCat : public WrongAnimal {
 
public:
    WrongCat();
    WrongCat(const WrongCat &other);
    WrongCat& operator=(const WrongCat &other);
    ~WrongCat();

    void makeSound() const;
};

#endif // WRONGCAT_HPP
