/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:31:02 by zamohame          #+#    #+#             */
/*   Updated: 2026/01/26 14:40:45 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _number(0) // default constructor
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _number(n << _fractionalBits) // int constructor
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : _number(roundf(f * (1 << _fractionalBits))) // float constructor
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) // copy constructor
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src; 
}

Fixed& Fixed::operator=(const Fixed& f) // copy assignment operator
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
		this->_number = f._number;
	
	return *this; 
}

Fixed::~Fixed() // destructor
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt(void) const
{
	return _number >> _fractionalBits;
}

float Fixed::toFloat(void) const
{
	return (float)_number / (1 << _fractionalBits);
}

// comparison operators

bool Fixed::operator>(const Fixed& rhs)
{
	return this->_number > rhs.getRawBits();
}

bool Fixed::operator<(const Fixed& rhs)
{
	return this->_number < rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed& rhs)
{
	return this->_number >= rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed& rhs)
{
	return this->_number <= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed& rhs)
{
	return this->_number == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed& rhs)
{
	return this->_number != rhs.getRawBits();
}

// arithmetic operators

Fixed Fixed::operator+(const Fixed& rhs)
{
	Fixed result;
	result.setRawBits(this->_number + rhs.getRawBits());
	return result;
}

Fixed Fixed::operator-(const Fixed& rhs)
{
	Fixed result;
	result.setRawBits(this->_number - rhs.getRawBits());
	return result;
}

Fixed Fixed::operator*(const Fixed& rhs)
{
	Fixed result;
	result.setRawBits((this->_number * rhs.getRawBits()) >> _fractionalBits);
	return result;
}

Fixed Fixed::operator/(const Fixed& rhs)
{
	Fixed result;
	result.setRawBits((this->_number << _fractionalBits) / rhs.getRawBits());
	return result;
}

// increment/decrement operators

Fixed& Fixed::operator++()
{
	this->_number += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_number += 1;
	return tmp;
}

Fixed& Fixed::operator--()
{
	this->_number -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->_number -= 1;
	return tmp;
}

// others

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_number;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_number = raw;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	return (a.getRawBits() < b.getRawBits()) ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() < b.getRawBits()) ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	return (a.getRawBits() > b.getRawBits()) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() > b.getRawBits()) ? a : b;
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}