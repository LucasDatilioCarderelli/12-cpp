/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:23:40 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/20 19:56:42 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {
    private:
        std::string _name;    

    public:
        Zombie(void);
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void) const;
        void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
