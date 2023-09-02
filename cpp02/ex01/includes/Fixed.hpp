/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:50:18 by ldatilio          #+#    #+#             */
/*   Updated: 2023/08/26 22:21:01 by ldatilio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
    public:
        // ex00
        Fixed(void);
        Fixed(Fixed const &fixed);
        Fixed& operator=(Fixed const &fixed);
        ~Fixed(void);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        
        //ex01
        Fixed( const int intValue );
        Fixed( const float floatValue );

        int toInt( void ) const;
        float toFloat( void ) const;

    private:
        int _rawBits;
        static const int _fractional_bits;
};

std::ostream &operator <<(std::ostream &out, Fixed const &f);

#endif // FIXED_HPP