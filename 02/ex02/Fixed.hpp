/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:31:06 by zamohame          #+#    #+#             */
/*   Updated: 2025/09/16 14:08:56 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _number;
		static const int _fractionalBits = 8;

	public:
		Fixed(); // constructor
		Fixed(const int n); // int constructor
		Fixed(const float f); // float constructor
		Fixed(Fixed const &src); // copy constructor
		Fixed &operator=(Fixed const &f); // copy assignment operator
		virtual ~Fixed(); // destructor

		// comparison operators

		bool operator>(const Fixed& rhs);
		bool operator<(const Fixed& rhs);
		bool operator>= (const Fixed& rhs);
		bool operator<= (const Fixed& rhs);
		bool operator== (const Fixed& rhs);
		bool operator!= (const Fixed& rhs);

		// arithmetic operators

		Fixed operator+(const Fixed& rhs);
		Fixed operator-(const Fixed& rhs);
		Fixed operator*(const Fixed& rhs);
		Fixed operator/(const Fixed& rhs);

		// increment/decrement operators

		Fixed& operator++(); // pre
		Fixed operator++(int); // post
		Fixed& operator--(); // pre
		Fixed operator--(int); // post

		int getRawBits(void) const;
		void setRawBits(int const raw);

		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min (const Fixed &a, const Fixed &b);

		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max (const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream &out, const Fixed &Fixed);

#endif
