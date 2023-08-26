/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:55:38 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/25 22:32:13 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
    public:
        Fixed(void);
        Fixed(Fixed const &fixed);
        Fixed& operator=(Fixed const &fixed);
        ~Fixed(void);

        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int _rawBits;
        static const int _fractional_bits;
};

#endif // FIXED_HPP