/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 18:28:39 by zamohame          #+#    #+#             */
/*   Updated: 2026/05/26 16:54:34 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

enum Type { CHAR, INT, FLOAT, DOUBLE, UNKNOWN };

static Type detectType(const std::string& literal)
{
    if (literal.length() == 1 && !(isdigit(literal[0])))
        return CHAR;
    if (literal[literal.length() - 1] == 'f' || literal == "nanf" || literal == "+inff" || literal == "-inff")
        return FLOAT;
    if (literal == "nanf" || literal == "+inf" || literal == "-inf" || literal.find('.') != std::string::npos)
        return DOUBLE;
    if (isdigit(literal[0]) || literal[0] == '+' || literal[0] == '-')
        return INT;
        
}