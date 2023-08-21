/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 22:26:04 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/20 23:33:49 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon {
    private:
        std::string _type;

    public:
        Weapon(std::string type);
        ~Weapon();
        std::string getType(void);
        void setType(std::string);
};

#endif //WEAPON_H