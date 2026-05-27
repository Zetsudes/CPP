/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <zamohame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 18:28:39 by zamohame          #+#    #+#             */
/*   Updated: 2026/05/27 15:21:08 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"
# include <iomanip>
# include <cmath>

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
    return UNKNOWN;
        
}

void ScalarConverter::convert(const std::string& literal)
{
    Type type = detectType(literal);

    char c = 0;
    int i = 0;
    float f = 0.0f;
    double d = 0.0;

    if (type == CHAR)
    {
        c = literal[0];
        i = static_cast<int>(c);
        f = static_cast<float>(c);
        d = static_cast<double>(c);
    }
    else if (type == INT)
    {
        i = static_cast<int>(strtol(literal.c_str(), NULL, 10));
        c = static_cast<char>(i);
        f = static_cast<float>(i);
        d = static_cast<double>(i);
    }
    else if (type == FLOAT)
    {
        f = strtof(literal.c_str(), NULL);
        c = static_cast<char>(f);
        i = static_cast<int>(f);
        d = static_cast<double>(f);
    }
    else if (type == DOUBLE)
    {
        d = strtod(literal.c_str(), NULL);
        c = static_cast<char>(d);
        i = static_cast<int>(d);
        f = static_cast<float>(d);
    }

    // CHAR
    if (type == FLOAT && (literal == "nanf" || literal == "+inff" || literal == "-inff"))
        std::cout << "char: impossible" << std::endl;
    else if (type == DOUBLE && (literal == "nan" || literal == "+inf" || literal == "-inf"))
        std::cout << "char: impossible" << std::endl;
    else if (i < 0 || i > 127)
        std::cout << "char: impossible" << std::endl;
    else if (!std::isprint(c))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << c << "'" << std::endl;
    // INT
    if (type == FLOAT && (literal == "nanf" || literal == "+inff" || literal == "-inff"))
        std::cout << "int: impossible" << std::endl;
    else if (type == DOUBLE && (literal == "nan" || literal == "+inf" || literal == "-inf"))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << i << std::endl;
    // FLOAT
    if (type == DOUBLE && (literal == "nan" || literal == "+inf" || literal == "-inf"))
        std::cout << "float: " << f << "f" << std::endl;
    else if (type == FLOAT && (literal == "nanf" || literal == "+inff" || literal == "-inff"))
        std::cout << "float: " << f << "f" << std::endl;
    else
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    // DOUBLE
    if (type == FLOAT && (literal == "nanf" || literal == "+inff" || literal == "-inff"))
        std::cout << "double: " << d << std::endl;
    else if (type == DOUBLE && (literal == "nan" || literal == "+inf" || literal == "-inf"))
        std::cout << "double: " << d << std::endl;
    else
        std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}