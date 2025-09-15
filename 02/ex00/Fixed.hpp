/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:31:06 by zamohame          #+#    #+#             */
/*   Updated: 2025/09/15 15:49:31 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int _number;
		static const int _fractionalBits = 8;

	public:
		Fixed() {} // constructor
		Fixed(Fixed const &src); // copy constructor
		Fixed &operator=(Fixed const &f); // copy assignment operator
		virtual ~Fixed(); // destructor
		int getRawBits(void) const;
		void setRawBits(int const raw);

};

#endif
