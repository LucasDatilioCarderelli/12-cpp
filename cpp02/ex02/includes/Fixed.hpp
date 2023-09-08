/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldatilio <ldatilio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:50:18 by ldatilio          #+#    #+#             */
/*   Updated: 2023/09/07 21:30:05 by ldatilio         ###   ########.fr       */
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

        //ex02
        bool operator>(Fixed const &fixed) const;
        bool operator<(Fixed const &fixed) const;
        bool operator>=(Fixed const &fixed) const;
        bool operator<=(Fixed const &fixed) const;
        bool operator==(Fixed const &fixed) const;
        bool operator!=(Fixed const &fixed) const;
        
        Fixed operator+(Fixed const &fixed) const;
        Fixed operator-(Fixed const &fixed) const;
        Fixed operator*(Fixed const &fixed) const;
        Fixed operator/(Fixed const &fixed) const;

        Fixed& operator++(void);
        Fixed operator++(int);
        Fixed& operator--(void);
        Fixed operator--(int);

        static Fixed& min(Fixed &f1, Fixed &f2);
        static const Fixed& min(Fixed const &f1, Fixed const &f2);
		static Fixed& max(Fixed &f1, Fixed &f2);
		static const Fixed& max(Fixed const &f1, Fixed const &f2);

    private:
        int _rawBits;
        static const int _fractional_bits;
};

std::ostream &operator <<(std::ostream &out, Fixed const &f);

#endif // FIXED_HPP