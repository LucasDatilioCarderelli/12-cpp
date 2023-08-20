/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:30:26 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/20 17:36:19 by ldatilio         ###   ########.fr       */
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
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
